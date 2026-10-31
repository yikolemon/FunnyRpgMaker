/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191be7 */

void FUN_10191be7(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x290);
  iVar5 = *(int *)(iVar1 + 0x1c) / 2;
  iVar4 = *(int *)(iVar2 + 0x54);
  if (iVar4 < iVar5) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    uVar3 = FUN_100fa1fa(iVar4 * 0xc);
    if (*(int *)(iVar2 + 0x58) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(iVar2 + 0x58),*(int *)(iVar2 + 0x50) * 0xc);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x58));
    }
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(int *)(iVar2 + 0x54) = iVar4;
  }
  else {
    uVar3 = *(undefined4 *)(iVar2 + 0x58);
  }
  *(int *)(iVar2 + 0x50) = iVar5;
  FUN_1019261e(*(undefined4 *)(iVar1 + 0x20),uVar3,iVar5);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  return;
}

