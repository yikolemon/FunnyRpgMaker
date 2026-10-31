/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274709 */

__acrt_ptd * FUN_10274709(void)

{
  DWORD dwErrCode;
  int iVar1;
  __acrt_ptd *p_Var2;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_10274bc2(DAT_1039b400,0xffffffff);
  if (iVar1 == 0) {
    SetLastError(dwErrCode);
    return (__acrt_ptd *)0x0;
  }
  p_Var2 = (__acrt_ptd *)FUN_10275d90(1,0x364);
  if (p_Var2 == (__acrt_ptd *)0x0) {
    FUN_10274bc2(DAT_1039b400,0);
    FUN_10274120(0);
    SetLastError(dwErrCode);
    p_Var2 = (__acrt_ptd *)0x0;
  }
  else {
    iVar1 = FUN_10274bc2(DAT_1039b400,p_Var2);
    if (iVar1 == 0) {
      FUN_10274bc2(DAT_1039b400,0);
      FUN_10274120(p_Var2);
      p_Var2 = (__acrt_ptd *)0x0;
    }
    else {
      construct_ptd(p_Var2,(__crt_locale_data **)&DAT_103a50f0);
      FUN_10274120(0);
    }
    SetLastError(dwErrCode);
  }
  return p_Var2;
}

