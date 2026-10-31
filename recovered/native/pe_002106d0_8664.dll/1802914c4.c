/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802914c4 */

__acrt_ptd * FUN_1802914c4(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_180415e90,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_180415e90,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_180415e90,(PVOID)0x0);
        FUN_180290e40(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_180290e40(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_180415e90,(PVOID)0x0);
    FUN_180290e40(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}

