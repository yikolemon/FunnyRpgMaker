/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b2630 */

undefined8 FUN_1400b2630(uint *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  uVar2 = param_3 & 0xfff7ffff;
  if ((param_2 & uVar2 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = thunk_FUN_1400b2ef0(0,0);
      *param_1 = uVar2;
    }
    p_Var1 = FUN_140095e5c();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_1400a0ea0();
    return 0x16;
  }
  if (param_1 != (uint *)0x0) {
    uVar2 = thunk_FUN_1400b2ef0(param_2,uVar2);
    *param_1 = uVar2;
    return 0;
  }
  thunk_FUN_1400b2ef0(param_2,uVar2);
  return 0;
}

