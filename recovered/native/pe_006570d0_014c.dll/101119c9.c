/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101119c9 */

void FUN_101119c9(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(iVar1 + 0x230);
  if (iVar2 == *(int *)(iVar1 + 0x234)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 * 4);
    if (*(int *)(iVar1 + 0x238) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(iVar1 + 0x238),*(int *)(iVar1 + 0x230) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x238));
    }
    *(int *)(iVar1 + 0x238) = iVar3;
    *(int *)(iVar1 + 0x234) = iVar4;
    iVar2 = *(int *)(iVar1 + 0x230);
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x238);
  }
  *(undefined4 *)(iVar3 + iVar2 * 4) = *(undefined4 *)(iVar1 + 0x220);
  *(int *)(iVar1 + 0x230) = *(int *)(iVar1 + 0x230) + 1;
  *(undefined4 *)(iVar1 + 0x220) = param_1;
  return;
}

