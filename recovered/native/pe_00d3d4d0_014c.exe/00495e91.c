/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495e91 */

undefined4 __fastcall FUN_00495e91(int param_1)

{
  DWORD dwErrCode;
  
  if (*(char *)(param_1 + 8) == '\0') {
    dwErrCode = GetLastError();
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    SetLastError(dwErrCode);
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}

