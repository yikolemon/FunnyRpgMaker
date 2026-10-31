/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a97e */

void FUN_14008a97e(longlong param_1)

{
  if (*(LPCVOID *)(param_1 + 0x18) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

