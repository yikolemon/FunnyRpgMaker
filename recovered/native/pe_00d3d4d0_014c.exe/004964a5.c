/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004964a5 */

__acrt_ptd * FUN_004964a5(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_00496943(DAT_0051ae80,(PVOID)0xffffffff);
  if (iVar1 == 0) {
    SetLastError(dwErrCode);
    return (__acrt_ptd *)0x0;
  }
  p_Var2 = FUN_00497060(1,0x364);
  if (p_Var2 == (__acrt_ptd *)0x0) {
    FUN_00496943(DAT_0051ae80,(PVOID)0x0);
    FUN_00495f00((LPVOID)0x0);
    SetLastError(dwErrCode);
    p_Var2 = (__acrt_ptd *)0x0;
  }
  else {
    iVar1 = FUN_00496943(DAT_0051ae80,p_Var2);
    if (iVar1 == 0) {
      FUN_00496943(DAT_0051ae80,(PVOID)0x0);
      FUN_00495f00(p_Var2);
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      construct_ptd(p_Var2,(__crt_locale_data **)&DAT_00521b90);
      FUN_00495f00((LPVOID)0x0);
    }
    SetLastError(dwErrCode);
  }
  return p_Var2;
}

