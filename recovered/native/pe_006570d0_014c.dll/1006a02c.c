/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a02c */

undefined8 __fastcall FUN_1006a02c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) ||
      (iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3,
      (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) * 0x3cf3cf3d + iVar1 * -0x4f72c235
      != 0)) || ((uint)(iVar1 * 0x4f72c235) <= param_2)) {
    uVar3 = FUN_1006235a();
  }
  else {
    uVar3 = FUN_1006235a();
  }
  uVar2 = FUN_1006235a();
  return CONCAT44(uVar2,uVar3);
}

