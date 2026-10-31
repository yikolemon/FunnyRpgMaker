/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400842e9 */

void FUN_1400842e9(void)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  lVar2 = DAT_140f2a910;
  if (((*(byte *)(DAT_140f2a910 + 0x34) & 0x10) == 0) &&
     (iVar3 = *(int *)(DAT_140f2a910 + 0x1300), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(DAT_140f2a910 + 0x1308);
    lVar7 = 0;
    do {
      *(undefined1 *)(*(longlong *)(lVar4 + lVar7) + 0x50) = 1;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar3 * 8 != lVar7);
  }
  fVar1 = *(float *)(lVar2 + 0x12f0);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    *(float *)(lVar2 + 0xda8) = fVar1;
    *(undefined4 *)(lVar2 + 0x12f0) = 0;
  }
  lVar4 = FUN_140090c22();
  fVar1 = *(float *)(lVar2 + 0xda8);
  if (fVar1 <= 0.0) {
    uVar9 = -(uint)(0.0 < *(float *)(lVar4 + 0x1c));
    fVar1 = (float)(~uVar9 & DAT_1401c86d4 | (uint)*(float *)(lVar4 + 0x1c) & uVar9);
    *(float *)(lVar2 + 0xda8) = fVar1;
  }
  *(longlong *)(lVar2 + 0x1310) = lVar4;
  *(float *)(lVar2 + 0x1324) = fVar1;
  *(undefined4 *)(lVar2 + 0x1320) = 0;
  FUN_140090c62(lVar4,fVar1,0);
  iVar3 = *(int *)(lVar2 + 0x2108);
  if (iVar3 == *(int *)(lVar2 + 0x210c)) {
    if (iVar3 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar3 / 2 + iVar3;
    }
    iVar8 = iVar3 + 1;
    if (iVar3 + 1 < iVar6) {
      iVar8 = iVar6;
    }
    lVar7 = FUN_140077ab4((longlong)iVar8 << 4);
    if (*(longlong *)(lVar2 + 0x2110) != 0) {
      FUN_1401c5180(lVar7,*(longlong *)(lVar2 + 0x2110),(longlong)*(int *)(lVar2 + 0x2108) << 4);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0x2110));
    }
    *(longlong *)(lVar2 + 0x2110) = lVar7;
    *(int *)(lVar2 + 0x210c) = iVar8;
    iVar3 = *(int *)(lVar2 + 0x2108);
  }
  else {
    lVar7 = *(longlong *)(lVar2 + 0x2110);
  }
  lVar5 = (longlong)iVar3 * 0x10;
  *(longlong *)(lVar7 + lVar5) = lVar4;
  *(float *)(lVar7 + 8 + lVar5) = fVar1;
  *(float *)(lVar7 + 0xc + lVar5) = fVar1;
  *(int *)(lVar2 + 0x2108) = *(int *)(lVar2 + 0x2108) + 1;
  return;
}

