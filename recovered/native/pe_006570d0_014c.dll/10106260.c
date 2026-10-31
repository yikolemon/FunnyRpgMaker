/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10106260 */

void FUN_10106260(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  iVar1 = DAT_1039d74c;
  if (((*(byte *)(DAT_1039d74c + 0x34) & 0x10) == 0) &&
     (iVar2 = *(int *)(DAT_1039d74c + 0x1214), iVar2 != 0)) {
    iVar3 = *(int *)(DAT_1039d74c + 0x121c);
    iVar4 = 0;
    do {
      *(undefined1 *)(*(int *)(iVar3 + iVar4) + 0x40) = 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 << 2 != iVar4);
  }
  fVar7 = *(float *)(iVar1 + 0x1208);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)(iVar1 + 0xcc0) = fVar7;
    *(undefined4 *)(iVar1 + 0x1208) = 0;
  }
  iVar2 = FUN_10112c1d();
  fVar7 = *(float *)(iVar1 + 0xcc0);
  if (fVar7 <= 0.0) {
    uVar6 = -(uint)(0.0 < *(float *)(iVar2 + 0x14));
    fVar7 = (float)(~uVar6 & DAT_102b7110 | (uint)*(float *)(iVar2 + 0x14) & uVar6);
    *(float *)(iVar1 + 0xcc0) = fVar7;
  }
  *(int *)(iVar1 + 0x1220) = iVar2;
  *(float *)(iVar1 + 0x122c) = fVar7;
  *(undefined4 *)(iVar1 + 0x1228) = 0;
  FUN_10112c4f(iVar2,fVar7,0,fVar7,0,0,0);
  iVar3 = *(int *)(iVar1 + 0x1f8c);
  if (iVar3 == *(int *)(iVar1 + 0x1f90)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 0xc);
    if (*(int *)(iVar1 + 0x1f94) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x1f94),*(int *)(iVar1 + 0x1f8c) * 0xc);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1f94));
    }
    *(int *)(iVar1 + 0x1f94) = iVar4;
    *(int *)(iVar1 + 0x1f90) = iVar5;
    iVar3 = *(int *)(iVar1 + 0x1f8c);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x1f94);
  }
  *(int *)(iVar4 + iVar3 * 0xc) = iVar2;
  *(float *)(iVar4 + 4 + iVar3 * 0xc) = fVar7;
  *(float *)(iVar4 + 8 + iVar3 * 0xc) = fVar7;
  *(int *)(iVar1 + 0x1f8c) = *(int *)(iVar1 + 0x1f8c) + 1;
  return;
}

