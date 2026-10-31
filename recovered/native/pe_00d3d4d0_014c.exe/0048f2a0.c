/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f2a0 */

undefined4 __cdecl FUN_0048f2a0(uint *param_1,uint param_2,uint param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  uVar2 = param_3 & 0xfff7ffff;
  if ((param_2 & uVar2 & 0xfcf0fce0) != 0) {
    if (param_1 != (uint *)0x0) {
      uVar2 = FUN_0049c710(0,0);
      *param_1 = uVar2;
    }
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return 0x16;
  }
  if (param_1 != (uint *)0x0) {
    uVar2 = FUN_0049c710(param_2,uVar2);
    *param_1 = uVar2;
    return 0;
  }
  FUN_0049c710(param_2,uVar2);
  return 0;
}

