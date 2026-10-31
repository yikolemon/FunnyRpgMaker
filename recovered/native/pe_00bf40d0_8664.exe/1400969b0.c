/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400969b0 */

uint FUN_1400969b0(uint param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_140143110;
    DAT_140143110 = param_1;
  }
  else {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

