/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111871 */

void FUN_10111871(byte param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_1039d74c;
  uVar3 = *(uint *)(DAT_1039d74c + 0x1e40);
  if ((param_1 != 0) && ((uVar3 & 0x40) == 0)) {
    pfVar1 = (float *)(DAT_1039d74c + 0xccc);
    *(float *)(DAT_1039d74c + 0x25e4) = *pfVar1;
    *(float *)(iVar2 + 0xccc) = *pfVar1 * *(float *)(iVar2 + 0xcd0);
  }
  if ((~param_1 & (uVar3 & 0x40) == 0) == 0) {
    uVar3 = uVar3 | 0x40;
    *(uint *)(iVar2 + 0x1e40) = uVar3;
  }
  iVar5 = *(int *)(iVar2 + 0x1fa4);
  if (iVar5 == *(int *)(iVar2 + 0x1fa8)) {
    if (iVar5 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar5 / 2 + iVar5;
    }
    iVar6 = iVar5 + 1;
    if (iVar5 + 1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar6 * 4);
    if (*(int *)(iVar2 + 0x1fac) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar2 + 0x1fac),*(int *)(iVar2 + 0x1fa4) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x1fac));
    }
    *(int *)(iVar2 + 0x1fac) = iVar4;
    *(int *)(iVar2 + 0x1fa8) = iVar6;
    uVar3 = *(uint *)(iVar2 + 0x1e40);
    iVar5 = *(int *)(iVar2 + 0x1fa4);
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x1fac);
  }
  *(uint *)(iVar4 + iVar5 * 4) = uVar3;
  *(int *)(iVar2 + 0x1fa4) = *(int *)(iVar2 + 0x1fa4) + 1;
  *(short *)(iVar2 + 0x25e8) = *(short *)(iVar2 + 0x25e8) + 1;
  return;
}

