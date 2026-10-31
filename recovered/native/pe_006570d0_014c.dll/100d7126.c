/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d7126 */

void FUN_100d7126(int param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)(param_3 - 1) >> 1;
  iVar3 = param_2;
  while (iVar3 < iVar6) {
    iVar1 = *(int *)(param_1 + 0x14 + iVar3 * 0x10);
    uVar2 = *(uint *)(param_1 + 0x10 + iVar3 * 0x10);
    uVar4 = *(uint *)(param_1 + 8 + iVar3 * 0x10);
    iVar7 = *(int *)(param_1 + 0xc + iVar3 * 0x10);
    if ((SBORROW4(iVar1,iVar7) != SBORROW4(iVar1 - iVar7,(uint)(uVar2 < uVar4))) ==
        (int)((iVar1 - iVar7) - (uint)(uVar2 < uVar4)) < 0) {
      iVar5 = iVar3 * 2 + 2;
    }
    else {
      iVar5 = iVar3 * 2 + 1;
    }
    if ((SBORROW4(iVar7,iVar1) != SBORROW4(iVar7 - iVar1,(uint)(uVar4 < uVar2))) !=
        (int)((iVar7 - iVar1) - (uint)(uVar4 < uVar2)) < 0) {
      uVar4 = uVar2;
      iVar7 = iVar1;
    }
    *(uint *)(param_1 + iVar3 * 8) = uVar4;
    *(int *)(param_1 + 4 + iVar3 * 8) = iVar7;
    iVar3 = iVar5;
  }
  if (((param_3 & 1) == 0) && (iVar3 == iVar6)) {
    *(undefined8 *)(param_1 + iVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    iVar3 = param_3 - 1;
  }
  while (param_2 < iVar3) {
    iVar7 = iVar3 + -1 >> 1;
    uVar2 = *(uint *)(param_1 + iVar7 * 8);
    iVar6 = *(int *)(param_1 + 4 + iVar7 * 8);
    uVar4 = (uint)(uVar2 < *param_4);
    iVar1 = iVar6 - param_4[1];
    if ((SBORROW4(iVar6,param_4[1]) != SBORROW4(iVar1,uVar4)) == (int)(iVar1 - uVar4) < 0) break;
    *(uint *)(param_1 + iVar3 * 8) = uVar2;
    *(int *)(param_1 + 4 + iVar3 * 8) = iVar6;
    iVar3 = iVar7;
  }
  *(undefined8 *)(param_1 + iVar3 * 8) = *(undefined8 *)param_4;
  return;
}

