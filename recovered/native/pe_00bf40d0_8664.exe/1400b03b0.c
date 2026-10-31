/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b03b0 */

byte FUN_1400b03b0(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1401437a0)) {
      return *(byte *)((&DAT_1401433a0)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 9;
    FUN_1400a0ea0();
  }
  return 0;
}

