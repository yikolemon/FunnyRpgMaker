/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406d14 */

void __fastcall FUN_00406d14(int param_1)

{
  CloseHandle(*(HANDLE *)(param_1 + 8));
  CloseHandle(*(HANDLE *)(param_1 + 4));
  return;
}

