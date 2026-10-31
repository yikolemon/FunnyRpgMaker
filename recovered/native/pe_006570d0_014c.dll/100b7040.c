/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7040 */

void __thiscall FUN_100b7040(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *param_1;
  if ((uint)((param_1[2] - iVar3 >> 3) * -0x55555555) < param_3) {
    FUN_100ab322(param_3);
    iVar1 = *param_1;
    uVar5 = param_3;
  }
  else {
    iVar1 = param_1[1];
    iVar4 = iVar1 - iVar3 >> 3;
    uVar5 = param_3 + iVar4 * 0x55555555;
    if (param_3 < (uint)(iVar4 * -0x55555555) || uVar5 == 0) {
      FUN_100b71b1(param_2,param_3,iVar3);
      iVar1 = param_1[1];
      iVar3 = iVar3 + param_3 * 0x18;
      for (iVar4 = iVar3; iVar4 != iVar1; iVar4 = iVar4 + 0x18) {
        FUN_10001fee();
      }
      goto LAB_100b70e5;
    }
    for (; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      puVar2 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar2 = (undefined4 *)*param_2;
      }
      FUN_100180a6(puVar2,param_2[4]);
      param_2 = param_2 + 6;
      iVar1 = param_1[1];
    }
  }
  iVar3 = FUN_100b70ef(param_2,uVar5,iVar1,param_1);
LAB_100b70e5:
  param_1[1] = iVar3;
  return;
}

