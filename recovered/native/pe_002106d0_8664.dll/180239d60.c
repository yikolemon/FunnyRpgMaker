/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239d60 */

ulonglong FUN_180239d60(HANDLE param_1,LPWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  
  DVar1 = GetFinalPathNameByHandleW(param_1,param_2,param_3,param_4);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}

