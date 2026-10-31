/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1588 */

__acrt_ptd * FUN_1400a1588(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_1401431e0 == '\0') {
    dwErrCode = GetLastError();
    p_Var1 = p_Var2;
    if (DAT_14013bbf0 != 0xffffffff) {
      p_Var1 = FlsGetValue(DAT_14013bbf0);
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_1400a18c4();
    }
    SetLastError(dwErrCode);
  }
  else {
    p_Var1 = p_Var2;
    if (DAT_14013bbf0 != 0xffffffff) {
      p_Var1 = (__acrt_ptd *)FUN_1400a1e00();
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_1400a18c4();
    }
  }
  return p_Var2;
}

