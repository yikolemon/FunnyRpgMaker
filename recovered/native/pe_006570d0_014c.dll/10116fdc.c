/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116fdc */

void FUN_10116fdc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = DAT_1039d74c;
  uVar1 = *(undefined4 *)(param_1 + 0x3a8);
  uVar2 = *(undefined4 *)(param_2 + 0x3a8);
  uVar4 = FUN_1010a65a(uVar1);
  iVar5 = FUN_1010a65a(uVar2);
  if ((int)uVar4 < iVar5) {
    FUN_1025b2d0(*(int *)(iVar3 + 0x148c) + uVar4 * 4,*(int *)(iVar3 + 0x148c) + uVar4 * 4 + 4,
                 (iVar5 + ~uVar4) * 4);
    *(undefined4 *)(*(int *)(iVar3 + 0x148c) + -4 + iVar5 * 4) = uVar1;
  }
  else {
    FUN_1025b2d0(*(int *)(iVar3 + 0x148c) + iVar5 * 4 + 4,*(int *)(iVar3 + 0x148c) + iVar5 * 4,
                 (uVar4 - iVar5) * 4);
    *(undefined4 *)(*(int *)(iVar3 + 0x148c) + iVar5 * 4) = uVar1;
  }
  return;
}

