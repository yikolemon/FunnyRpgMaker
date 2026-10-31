/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cfc14 */

longlong FUN_1400cfc14(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  lVar6 = DAT_140f2a910;
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar16 = *(float *)(DAT_140f2a910 + 0x1320);
  fVar1 = *(float *)(DAT_140f2a910 + 0xdf8);
  fVar17 = fVar16 + DAT_140211dfc;
  uVar5 = *(undefined8 *)(lVar4 + 0x158);
  local_a8 = *(undefined8 *)(DAT_140f2a910 + 0xee8);
  fStack_9c = (float)((ulonglong)*(undefined8 *)(DAT_140f2a910 + 0xef0) >> 0x20);
  _uStack_a0 = CONCAT44(fStack_9c * DAT_1401c86a0,(int)*(undefined8 *)(DAT_140f2a910 + 0xef0));
  lVar11 = 0;
  FUN_14007a7b5(0);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_14007a7b5(0x16);
  FUN_14008f7a2(10,1);
  uVar13 = CONCAT44(fVar1 + fVar1 + fVar16,fVar17);
  uVar2 = *(undefined8 *)(lVar6 + 0xa8);
  *(undefined8 *)(lVar6 + 0xa8) = DAT_140211ee0;
  fVar16 = (float)FUN_14007b71f(*(undefined4 *)(param_1 + 0x38),
                                *(float *)(param_1 + 0x40) - (fVar17 + fVar17));
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar4 + 0x158) = fVar16;
  *(undefined4 *)(lVar4 + 0x15c) = uVar3;
  bVar8 = FUN_1400ad36d(&DAT_140ecd752,0,uVar13,0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar4 + 0x158) = fVar17 + fVar16;
  *(undefined4 *)(lVar4 + 0x15c) = uVar3;
  cVar9 = FUN_1400ad36d(&DAT_140ecd74b,1,uVar13,0x10);
  iVar7 = -(uint)bVar8;
  if (cVar9 != '\0') {
    iVar7 = 1;
  }
  FUN_14008f860();
  FUN_14007a8e1(2);
  *(undefined8 *)(lVar6 + 0xa8) = uVar2;
  if (iVar7 != 0) {
    lVar11 = FUN_1400cc72f(param_1,*(undefined4 *)(param_1 + 0x20));
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x10);
      iVar10 = (int)((ulonglong)(lVar11 - lVar6) >> 3) * -0x49249249;
      iVar12 = iVar10 + iVar7;
      iVar14 = iVar10 + iVar7 * 2;
      do {
        if ((iVar12 < 0) || (iVar15 = iVar12, *(int *)(param_1 + 8) <= iVar12)) {
          iVar15 = iVar10;
        }
        lVar11 = lVar6 + (longlong)iVar15 * 0x38;
        if (((*(byte *)(lVar6 + 6 + (longlong)iVar15 * 0x38) & 0x20) == 0) || (iVar14 < 0)) break;
        iVar12 = iVar12 + iVar7;
        iVar10 = iVar10 + iVar7;
        iVar14 = iVar14 + iVar7;
      } while (iVar12 < *(int *)(param_1 + 8));
    }
  }
  fVar16 = fVar17 + fVar17 + DAT_1401c86c8;
  *(undefined8 *)(lVar4 + 0x158) = uVar5;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - fVar16;
  if (DAT_140f17b40 != (local_90 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_90 ^ (ulonglong)auStack_d8);
  }
  return lVar11;
}

