/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077948 */

void __fastcall FUN_10077948(int param_1)

{
  if (*(LPCVOID *)(param_1 + 0xc) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

