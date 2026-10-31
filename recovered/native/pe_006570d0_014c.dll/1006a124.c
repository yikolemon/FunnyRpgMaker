/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006a124 */

undefined8 __fastcall FUN_1006a124(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((param_1 == 0) ||
      (iVar1 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3,
      (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3) * -0x33333333 + iVar1 * -0x3cf3cf3d
      != 0)) || ((uint)(iVar1 * 0x3cf3cf3d) <= param_2)) {
    uVar3 = FUN_1006235a();
  }
  else {
    uVar3 = FUN_1006235a();
  }
  uVar2 = FUN_1006235a();
  return CONCAT44(uVar2,uVar3);
}

