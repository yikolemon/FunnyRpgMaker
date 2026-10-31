/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9bd8 */

void __thiscall FUN_100b9bd8(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar3 >> 2) * -0x49249249) < param_3) {
    FUN_100b9c8e(param_3);
    iVar1 = *(int *)(param_1 + 4);
    uVar5 = param_3;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 - iVar3 >> 2;
    uVar5 = param_3 + iVar4 * 0x49249249;
    if (param_3 < (uint)(iVar4 * -0x49249249) || uVar5 == 0) {
      FUN_100b9e06(param_2,param_3,iVar3);
      iVar1 = *(int *)(param_1 + 8);
      iVar3 = param_3 * 0x1c + iVar3;
      for (iVar4 = iVar3; iVar4 != iVar1; iVar4 = iVar4 + 0x1c) {
        FUN_100b9a02();
      }
      goto LAB_100b9c83;
    }
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x1c) {
      puVar2 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar2 = (undefined4 *)*param_2;
      }
      FUN_100b9f36(puVar2,param_2[4]);
      param_2 = param_2 + 6;
      iVar1 = *(int *)(param_1 + 8);
    }
  }
  iVar3 = FUN_100b9d3d(param_2,uVar5,iVar1,param_1);
LAB_100b9c83:
  *(int *)(param_1 + 8) = iVar3;
  return;
}

