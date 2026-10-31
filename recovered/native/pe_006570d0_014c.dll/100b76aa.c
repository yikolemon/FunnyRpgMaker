/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b76aa */

void __thiscall FUN_100b76aa(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  if ((uint)((param_1[2] - iVar2 >> 3) * -0x55555555) < param_3) {
    FUN_100ab322(param_3);
    iVar1 = *param_1;
    uVar4 = param_3;
  }
  else {
    iVar1 = param_1[1];
    iVar3 = iVar1 - iVar2 >> 3;
    uVar4 = param_3 + iVar3 * 0x55555555;
    if (param_3 < (uint)(iVar3 * -0x55555555) || uVar4 == 0) {
      FUN_100b781e(param_2,param_3,iVar2);
      iVar1 = param_1[1];
      iVar2 = iVar2 + param_3 * 0x18;
      for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
        FUN_10001fee();
      }
      goto LAB_100b7752;
    }
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        iVar1 = param_2 + 4;
      }
      else {
        iVar1 = *(int *)(param_2 + 4);
      }
      FUN_100180a6(iVar1,*(undefined4 *)(param_2 + 0x14));
      param_2 = param_2 + 0x1c;
      iVar1 = param_1[1];
    }
  }
  iVar2 = FUN_100b775c(param_2,uVar4,iVar1,param_1);
LAB_100b7752:
  param_1[1] = iVar2;
  return;
}

