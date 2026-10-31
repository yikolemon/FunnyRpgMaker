/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102740b1 */

undefined4 __fastcall FUN_102740b1(int param_1)

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

