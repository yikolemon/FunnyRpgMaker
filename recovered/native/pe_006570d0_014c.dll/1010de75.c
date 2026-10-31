/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010de75 */

void FUN_1010de75(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_1039d74c;
  *(undefined4 *)(*(int *)(DAT_1039d74c + 0x14b0) + -4 + *(int *)(DAT_1039d74c + 0x14a8) * 0x70) =
       *(undefined4 *)(DAT_1039d74c + 0xccc);
  *(undefined4 *)(iVar1 + 0xccc) = *(undefined4 *)(iVar1 + 0x25e4);
  iVar2 = *(int *)(iVar1 + 0x1fa4);
  uVar3 = *(uint *)(iVar1 + 0x1e40) & 0xffffffbf;
  *(uint *)(iVar1 + 0x1e40) = uVar3;
  if (iVar2 == *(int *)(iVar1 + 0x1fa8)) {
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    iVar5 = iVar2 + 1;
    if (iVar2 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 4);
    if (*(int *)(iVar1 + 0x1fac) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x1fac),*(int *)(iVar1 + 0x1fa4) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1fac));
    }
    *(int *)(iVar1 + 0x1fac) = iVar4;
    *(int *)(iVar1 + 0x1fa8) = iVar5;
    uVar3 = *(uint *)(iVar1 + 0x1e40);
    iVar2 = *(int *)(iVar1 + 0x1fa4);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x1fac);
  }
  *(uint *)(iVar4 + iVar2 * 4) = uVar3;
  *(int *)(iVar1 + 0x1fa4) = *(int *)(iVar1 + 0x1fa4) + 1;
  *(short *)(iVar1 + 0x25e8) = *(short *)(iVar1 + 0x25e8) + 1;
  return;
}

