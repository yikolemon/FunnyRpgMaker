/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048b7a2 */

uint __fastcall FUN_0048b7a2(int *param_1)

{
  undefined4 in_EAX;
  __acrt_ptd *p_Var1;
  uint uVar2;
  
  if (*param_1 == 0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    uVar2 = FUN_00495c88();
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

