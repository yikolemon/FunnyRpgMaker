// Owns the newly created child through a kill-on-close Job Object. No arbitrary PID attach.
#include <windows.h>
#include <tlhelp32.h>
#include <cstdint>
#include <iostream>
#include <string>

static uintptr_t remote_module(DWORD pid, const wchar_t* name) {
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
    if (snapshot == INVALID_HANDLE_VALUE) return 0;
    MODULEENTRY32W entry = {}; entry.dwSize = sizeof(entry);
    uintptr_t address = 0;
    if (Module32FirstW(snapshot, &entry)) do {
        if (!_wcsicmp(entry.szModule, name)) { address = reinterpret_cast<uintptr_t>(entry.modBaseAddr); break; }
    } while (Module32NextW(snapshot, &entry));
    CloseHandle(snapshot);
    return address;
}

static DWORD remote_call(HANDLE process, uintptr_t address, void* arg) {
    HANDLE thread = CreateRemoteThread(process, nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(address), arg, 0, nullptr);
    if (!thread) return 0;
    DWORD result = 0;
    if (WaitForSingleObject(thread, 30000) == WAIT_OBJECT_0) GetExitCodeThread(thread, &result);
    CloseHandle(thread);
    return result;
}

int wmain(int argc, wchar_t** argv) {
    if (argc != 3) { std::cerr << "Usage: wolf_launch GAME_EXE CAPTURE_DLL\n"; return 2; }
    std::wstring game = argv[1], dll = argv[2];
    HANDLE job = CreateJobObjectW(nullptr, nullptr);
    JOBOBJECT_EXTENDED_LIMIT_INFORMATION limit = {};
    limit.BasicLimitInformation.LimitFlags = JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE;
    if (!job || !SetInformationJobObject(job, JobObjectExtendedLimitInformation, &limit, sizeof(limit))) return 3;
    STARTUPINFOW startup = {}; startup.cb = sizeof(startup);
    PROCESS_INFORMATION process = {};
    std::wstring command = L"\"" + game + L"\"";
    std::wstring directory = game.substr(0, game.find_last_of(L"\\/"));
    if (!CreateProcessW(game.c_str(), command.data(), nullptr, nullptr, FALSE, CREATE_SUSPENDED,
                        nullptr, directory.c_str(), &startup, &process)) { CloseHandle(job); return 4; }
    int status = 5;
    if (!AssignProcessToJobObject(job, process.hProcess)) { TerminateProcess(process.hProcess, 5); goto cleanup; }
    if (ResumeThread(process.hThread) == static_cast<DWORD>(-1)) goto cleanup;
    WaitForInputIdle(process.hProcess, 5000); // Finish legacy loader initialization before module enumeration.
    {
        void* load = reinterpret_cast<void*>(GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "LoadLibraryW"));
        HMODULE owner = nullptr;
        wchar_t owner_path[MAX_PATH];
        if (!load || !GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                         reinterpret_cast<LPCWSTR>(load), &owner) || !GetModuleFileNameW(owner, owner_path, MAX_PATH)) goto cleanup;
        const wchar_t* basename = wcsrchr(owner_path, L'\\');
        auto remote_owner = remote_module(process.dwProcessId, basename ? basename + 1 : owner_path);
        if (!remote_owner) goto cleanup;
        auto remote_load = remote_owner + reinterpret_cast<uintptr_t>(load) - reinterpret_cast<uintptr_t>(owner);
        auto bytes = (dll.size() + 1) * sizeof(wchar_t);
        void* arg = VirtualAllocEx(process.hProcess, nullptr, bytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        SIZE_T count = 0;
        if (!arg || !WriteProcessMemory(process.hProcess, arg, dll.c_str(), bytes, &count) || count != bytes) goto cleanup;
        DWORD module = remote_call(process.hProcess, remote_load, arg);
        if (!module) goto cleanup;
        VirtualFreeEx(process.hProcess, arg, 0, MEM_RELEASE);
        HMODULE local = LoadLibraryExW(dll.c_str(), nullptr, DONT_RESOLVE_DLL_REFERENCES);
        if (!local) goto cleanup;
        auto init = GetProcAddress(local, "_Initialize@4");
        if (!init) init = GetProcAddress(local, "Initialize");
        auto remote_init = module + reinterpret_cast<uintptr_t>(init) - reinterpret_cast<uintptr_t>(local);
        if (!init || remote_call(process.hProcess, remote_init, nullptr) != 1) { FreeLibrary(local); goto cleanup; }
        FreeLibrary(local);
        std::cout << "{\"installed\":true,\"pid\":" << process.dwProcessId << "}" << std::endl;
        WaitForSingleObject(process.hProcess, INFINITE);
        status = 0;
    }
cleanup:
    CloseHandle(job); // Any failure or host termination closes the job and terminates the owned child.
    CloseHandle(process.hThread);
    CloseHandle(process.hProcess);
    if (status) std::cerr << "Capture launcher failed (no game string mutation), Win32 error " << GetLastError() << std::endl;
    return status;
}
