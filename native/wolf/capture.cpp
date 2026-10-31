// New capture-only adapter for the exact verified Wolf 2.24 x86 profile.
// Game strings are read, never replaced or reallocated by this module.
#include <windows.h>
#include <cstdint>
#include <cstring>
#include <string>
#include <unordered_map>
#include "MinHook.h"

static HMODULE self;
static HANDLE output = INVALID_HANDLE_VALUE;
static CRITICAL_SECTION lock;
static volatile LONG calls = 0, emitted = 0, failures = 0;
static unsigned long long written = 0;
static std::unordered_map<std::string, ULONGLONG> recent;
static bool capped = false;
using Draw = void (__thiscall *)(void*, char, double, double, double);
static Draw original = nullptr;

static bool read_message(void* container, unsigned slot, char* text, uint32_t* length) {
    __try {
        auto string = static_cast<unsigned char*>(container) + slot * 28;
        uint32_t size = *reinterpret_cast<uint32_t*>(string + 20);
        uint32_t capacity = *reinterpret_cast<uint32_t*>(string + 24);
        if (!size || size > 8192 || size > capacity) return false;
        const char* data = capacity < 16 ? reinterpret_cast<char*>(string + 4) : *reinterpret_cast<char**>(string + 4);
        if (!data) return false;
        memcpy(text, data, size);
        *length = size;
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) { InterlockedIncrement(&failures); return false; }
}

static void capture(void* container) noexcept {
    InterlockedIncrement(&calls);
    for (uint32_t slot = 0; slot < 2; slot++) {
        char text[8192];
        uint32_t length = 0;
        if (!read_message(container, slot, text, &length)) continue;
        EnterCriticalSection(&lock);
        try {
            const std::string value(text, length);
            const auto now = GetTickCount64();
            const auto found = recent.find(value);
            const bool unseen = found == recent.end();
            if (!capped && (unseen || now - found->second >= 3000)) {
                if (recent.size() >= 2048) {
                    for (auto it = recent.begin(); it != recent.end();) {
                        if (now - it->second >= 3000) it = recent.erase(it); else ++it;
                    }
                }
                if (recent.size() >= 2048 && unseen) { LeaveCriticalSection(&lock); continue; }
                recent[value] = now;
                if (written + length + 16 <= 20 * 1024 * 1024) {
                    DWORD count = 0;
                    uint32_t header[2] = { length, slot };
                    bool ok = WriteFile(output, header, sizeof(header), &count, nullptr) && count == sizeof(header);
                    ok = ok && WriteFile(output, text, length, &count, nullptr) && count == length;
                    if (ok) { written += length + 8; InterlockedIncrement(&emitted); }
                    else InterlockedIncrement(&failures);
                } else {
                    capped = true;
                    uint32_t end[2] = { 0, 2 }; DWORD count = 0;
                    WriteFile(output, end, sizeof(end), &count, nullptr);
                }
            }
        } catch (...) { InterlockedIncrement(&failures); }
        LeaveCriticalSection(&lock);
    }
}

static void __fastcall hooked(void* container, void*, char flag, double x, double y, double scale) {
    capture(container);
    original(container, flag, x, y, scale);
}

extern "C" __declspec(dllexport) DWORD WINAPI Initialize(void*) {
    if (original) return 0;
    auto base = reinterpret_cast<unsigned char*>(GetModuleHandleW(nullptr));
    auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
    auto nt = reinterpret_cast<IMAGE_NT_HEADERS32*>(base + dos->e_lfanew);
    if (dos->e_magic != IMAGE_DOS_SIGNATURE || nt->Signature != IMAGE_NT_SIGNATURE ||
        nt->FileHeader.Machine != IMAGE_FILE_MACHINE_I386 || nt->OptionalHeader.SizeOfImage < 0x94486) return 0;
    auto target = base + 0x94480;
    const unsigned char expected[] = { 0x55, 0x8b, 0xec, 0x6a, 0xff, 0x68 };
    if (memcmp(target, expected, sizeof(expected))) return 0;
    wchar_t file[32768];
    if (!GetModuleFileNameW(self, file, 32768)) return 0;
    std::wstring path(file);
    path = path.substr(0, path.find_last_of(L"\\/") + 1) + L"wolf-capture.bin";
    output = CreateFileW(path.c_str(), GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
                         nullptr, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (output == INVALID_HANDLE_VALUE) return 0;
    InitializeCriticalSection(&lock);
    if (MH_Initialize() != MH_OK || MH_CreateHook(target, &hooked, reinterpret_cast<void**>(&original)) != MH_OK || MH_EnableHook(target) != MH_OK) {
        CloseHandle(output); output = INVALID_HANDLE_VALUE; return 0;
    }
    return 1;
}

BOOL WINAPI DllMain(HINSTANCE module, DWORD reason, void*) {
    if (reason == DLL_PROCESS_ATTACH) self = module;
    return TRUE;
}
