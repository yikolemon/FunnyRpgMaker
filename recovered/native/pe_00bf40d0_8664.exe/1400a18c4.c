/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a18c4 */

__acrt_ptd * FUN_1400a18c4(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_14013bbf0,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_14013bbf0,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_14013bbf0,(PVOID)0x0);
        FUN_1400a1290(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_1400a1290((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_14013bbf0,(PVOID)0x0);
    FUN_1400a1290((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}

