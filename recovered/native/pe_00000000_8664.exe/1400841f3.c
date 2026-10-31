/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400841f3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400841f3(void)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = DAT_140f2a910;
  fVar10 = _DAT_1402114a0;
  fVar11 = _UNK_1402114a4;
  fVar8 = _UNK_1402114a8;
  fVar9 = _UNK_1402114ac;
  if ((longlong)*(int *)(DAT_140f2a910 + 0x2178) != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x2180) + lVar5);
      uVar1 = *(undefined8 *)(lVar3 + 8);
      fVar12 = (float)uVar1;
      fVar13 = (float)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      fVar14 = (float)uVar1 + fVar12;
      fVar15 = (float)((ulonglong)uVar1 >> 0x20) + fVar13;
      uVar6 = -(uint)(fVar8 < fVar14);
      uVar7 = -(uint)(fVar9 < fVar15);
      fVar10 = (float)(~-(uint)(fVar12 < fVar10) & (uint)fVar10 |
                      (uint)fVar12 & -(uint)(fVar12 < fVar10));
      fVar11 = (float)(~-(uint)(fVar13 < fVar11) & (uint)fVar11 |
                      (uint)fVar13 & -(uint)(fVar13 < fVar11));
      fVar8 = (float)(~uVar6 & (uint)fVar8 | (uint)fVar14 & uVar6);
      fVar9 = (float)(~uVar7 & (uint)fVar9 | (uint)fVar15 & uVar7);
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(DAT_140f2a910 + 0x2178) * 8 != lVar5);
  }
  lVar5 = DAT_140f2a910 + 0x1338;
  *(float *)(DAT_140f2a910 + 0x1370) = fVar10;
  *(float *)(lVar4 + 0x1374) = fVar11;
  *(float *)(lVar4 + 0x1378) = fVar8;
  *(float *)(lVar4 + 0x137c) = fVar9;
  *(undefined4 *)(lVar4 + 0x1360) = *(undefined4 *)(lVar4 + 0xee0);
  FUN_1400d97cc(lVar5,*(undefined4 *)(lVar4 + 0xee4));
  bVar2 = *(byte *)(lVar4 + 0xedc);
  uVar6 = (uint)bVar2;
  *(uint *)(lVar4 + 0x136c) = (uint)bVar2;
  if ((*(char *)(lVar4 + 0xedd) != '\0') && ((**(byte **)(lVar4 + 0x68) & 4) == 0)) {
    uVar6 = bVar2 | 2;
    *(uint *)(lVar4 + 0x136c) = uVar6;
  }
  if (*(char *)(lVar4 + 0xede) == '\x01') {
    uVar6 = uVar6 | 4;
    *(uint *)(lVar4 + 0x136c) = uVar6;
  }
  if ((*(byte *)(lVar4 + 0x34) & 8) != 0) {
    *(uint *)(lVar4 + 0x136c) = uVar6 | 8;
  }
  *(undefined4 *)(lVar4 + 0x1368) = 0x3f800000;
  return;
}

