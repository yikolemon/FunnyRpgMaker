/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800783ce */

void FUN_1800783ce(longlong param_1)

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

