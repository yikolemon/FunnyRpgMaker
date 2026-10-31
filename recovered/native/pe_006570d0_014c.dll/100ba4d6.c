/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba4d6 */

void __thiscall FUN_100ba4d6(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar2 >> 2) * -0x49249249) < param_3) {
    FUN_100b9c8e(param_3);
    iVar1 = *(int *)(param_1 + 4);
    uVar4 = param_3;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    iVar3 = iVar1 - iVar2 >> 2;
    uVar4 = param_3 + iVar3 * 0x49249249;
    if (param_3 < (uint)(iVar3 * -0x49249249) || uVar4 == 0) {
      FUN_100ba64e(param_2,param_3,iVar2);
      iVar1 = *(int *)(param_1 + 8);
      iVar2 = param_3 * 0x1c + iVar2;
      for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x1c) {
        FUN_100b9a02();
      }
      goto LAB_100ba588;
    }
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
      if (iVar2 != param_2) {
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          iVar1 = param_2 + 4;
        }
        else {
          iVar1 = *(int *)(param_2 + 4);
        }
        FUN_100b9f36(iVar1,*(undefined4 *)(param_2 + 0x14));
        iVar1 = *(int *)(param_1 + 8);
      }
      param_2 = param_2 + 0x1c;
    }
  }
  iVar2 = FUN_100ba592(param_2,uVar4,iVar1,param_1);
LAB_100ba588:
  *(int *)(param_1 + 8) = iVar2;
  return;
}

