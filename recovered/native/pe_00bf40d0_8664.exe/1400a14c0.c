/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a14c0 */

ulonglong FUN_1400a14c0(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_1401431e0 = FUN_1400a2468();
  DAT_14013bbf0 = FlsAlloc(FUN_1400a1674);
  uVar2 = CONCAT44(extraout_var,DAT_14013bbf0);
  if (DAT_14013bbf0 != 0xffffffff) {
    p_Var3 = FUN_1400a1588();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_1400a1504();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}

