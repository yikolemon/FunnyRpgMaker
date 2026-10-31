/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2994 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__acrt_ptd * FUN_1404a2994(void)

{
  undefined4 uVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  
  uVar1 = (*_DAT_14059df60)();
  iVar2 = FUN_1404a2f14(s___AV__time_get__WV__istreambuf_i_140627320._64_4_,0xffffffffffffffff);
  if (iVar2 != 0) {
    p_Var3 = (__acrt_ptd *)_calloc_base(1,0x3c8);
    if (p_Var3 != (__acrt_ptd *)0x0) {
      iVar2 = FUN_1404a2f14(s___AV__time_get__WV__istreambuf_i_140627320._64_4_,p_Var3);
      if (iVar2 == 0) {
        FUN_1404a2f14(s___AV__time_get__WV__istreambuf_i_140627320._64_4_,0);
        FUN_1404a2310(p_Var3);
        p_Var3 = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(p_Var3);
        FUN_1404a2310(0);
      }
      (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(uVar1);
      return p_Var3;
    }
    FUN_1404a2f14(s___AV__time_get__WV__istreambuf_i_140627320._64_4_,0);
    FUN_1404a2310(0);
  }
  (*(code *)s_IsProcessorFeaturePresent_14059e1c0._8_8_)(uVar1);
  return (__acrt_ptd *)0x0;
}

