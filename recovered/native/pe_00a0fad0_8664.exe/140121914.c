/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121914 */

__acrt_ptd * FUN_140121914(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1401ca634,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = (__acrt_ptd *)_calloc_base(1);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_1401ca634,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1401ca634,(PVOID)0x0);
        FUN_1401212e0(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1401212e0(0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1401ca634,(PVOID)0x0);
    FUN_1401212e0(0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}

