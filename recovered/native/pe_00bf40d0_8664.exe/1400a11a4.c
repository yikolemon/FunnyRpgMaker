/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a11a4 */

longlong FUN_1400a11a4(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}

