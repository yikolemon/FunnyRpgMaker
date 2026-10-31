/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dc6c0 */

ulonglong FUN_1400dc6c0(HANDLE param_1,LPWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  
  DVar1 = GetFinalPathNameByHandleW(param_1,param_2,param_3,param_4);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    return (ulonglong)DVar1 << 0x20;
  }
  return (ulonglong)DVar1;
}

