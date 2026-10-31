/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802911c8 */

void FUN_1802911c8(void)

{
  __acrt_ptd *p_Var1;
  
  if (DAT_180415e90 == 0xffffffff) {
    p_Var1 = (__acrt_ptd *)0x0;
  }
  else {
    p_Var1 = FlsGetValue(DAT_180415e90);
  }
  if (p_Var1 != (__acrt_ptd *)0x0) {
    FlsSetValue(DAT_180415e90,(PVOID)0x0);
    destroy_ptd_array(p_Var1);
    FUN_180290e40(p_Var1);
  }
  return;
}

