/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10106170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10106170(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = DAT_1039d74c;
  fVar9 = _DAT_102b8bf0;
  fVar10 = _UNK_102b8bf4;
  fVar7 = _UNK_102b8bf8;
  fVar8 = _UNK_102b8bfc;
  if (*(int *)(DAT_1039d74c + 0x1fe0) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(DAT_1039d74c + 0x1fe8) + iVar4);
      uVar1 = *(undefined8 *)(iVar2 + 8);
      fVar11 = (float)uVar1;
      fVar12 = (float)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)(iVar2 + 0x10);
      fVar13 = (float)uVar1 + fVar11;
      fVar14 = (float)((ulonglong)uVar1 >> 0x20) + fVar12;
      uVar5 = -(uint)(fVar7 < fVar13);
      uVar6 = -(uint)(fVar8 < fVar14);
      fVar9 = (float)(~-(uint)(fVar11 < fVar9) & (uint)fVar9 |
                     (uint)fVar11 & -(uint)(fVar11 < fVar9));
      fVar10 = (float)(~-(uint)(fVar12 < fVar10) & (uint)fVar10 |
                      (uint)fVar12 & -(uint)(fVar12 < fVar10));
      fVar7 = (float)(~uVar5 & (uint)fVar7 | (uint)fVar13 & uVar5);
      fVar8 = (float)(~uVar6 & (uint)fVar8 | (uint)fVar14 & uVar6);
      iVar4 = iVar4 + 4;
    } while (*(int *)(DAT_1039d74c + 0x1fe0) << 2 != iVar4);
  }
  *(float *)(DAT_1039d74c + 0x1268) = fVar9;
  *(float *)(iVar3 + 0x126c) = fVar10;
  *(float *)(iVar3 + 0x1270) = fVar7;
  *(float *)(iVar3 + 0x1274) = fVar8;
  *(undefined4 *)(iVar3 + 0x1258) = *(undefined4 *)(iVar3 + 0xdf8);
  FUN_10186e8e(*(undefined4 *)(iVar3 + 0xdfc));
  uVar5 = (uint)*(byte *)(iVar3 + 0xdf4);
  *(uint *)(iVar3 + 0x1264) = uVar5;
  if ((*(char *)(iVar3 + 0xdf5) != '\0') && ((**(byte **)(iVar3 + 0x5c) & 4) == 0)) {
    uVar5 = uVar5 | 2;
    *(uint *)(iVar3 + 0x1264) = uVar5;
  }
  if (*(char *)(iVar3 + 0xdf6) == '\x01') {
    uVar5 = uVar5 | 4;
    *(uint *)(iVar3 + 0x1264) = uVar5;
  }
  if ((*(byte *)(iVar3 + 0x34) & 8) != 0) {
    *(uint *)(iVar3 + 0x1264) = uVar5 | 8;
  }
  *(undefined4 *)(iVar3 + 0x1260) = 0x3f800000;
  return;
}

