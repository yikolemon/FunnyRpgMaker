/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fc74 */

void __thiscall FUN_1018fc74(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = param_1;
  FUN_1018e667(param_1,param_2);
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    iVar9 = 0;
    do {
      FUN_1018e6b7(iVar8,*(undefined4 *)(iVar1 + iVar9));
      iVar9 = iVar9 + 4;
    } while (iVar3 << 2 != iVar9);
  }
  iVar3 = *(int *)(param_1 + 0x60);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      if (*(int *)(*(int *)(param_1 + 0x68) + 0x70 + uVar5 * 0x80) == param_2) {
        iVar8 = *(int *)(param_1 + 0x68) + uVar5 * 0x80;
        uVar6 = uVar5 - 1;
        FUN_1025b2d0(iVar8,iVar8 + 0x80,(iVar3 + ~uVar5) * 0x80);
        iVar3 = *(int *)(param_1 + 0x60) + -1;
        *(int *)(param_1 + 0x60) = iVar3;
      }
      uVar5 = uVar6 + 1;
    } while ((int)uVar5 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x54);
  piVar2 = *(int **)(param_1 + 0x5c);
  piVar7 = piVar2;
  if (0 < iVar3) {
    do {
      if (*piVar7 == param_2) break;
      piVar7 = piVar7 + 1;
    } while (piVar7 < piVar2 + iVar3);
  }
  if (piVar7 < piVar2 + iVar3) {
    FUN_1025b2d0(piVar7,piVar7 + 1,(iVar3 + ((uint)~((int)piVar7 - (int)piVar2) >> 2)) * 4);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  FUN_1018f55d(param_1);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_1018f6a6(param_2);
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined4 **)(param_1 + 0x5c);
  }
  FUN_1018e4d8(param_1,param_2,uVar4);
  return;
}

