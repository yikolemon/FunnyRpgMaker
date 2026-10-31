/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076fdd3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14076fdd3(void)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 *puVar10;
  
  uVar9 = (int)&stack0xffffffffffffffe0 - 0x28;
  puVar10 = (undefined1 *)(ulonglong)uVar9;
  *(uint *)(puVar10 + 0x24) = _DAT_150af8ae4 ^ uVar9;
  uVar9 = _DAT_150b0d53c;
  uVar16 = (ulonglong)_DAT_150b0d53c;
  if (*(uint *)(puVar10 + 0x3c) != 0) {
    iVar13 = 0;
    if (*(int *)(uVar16 + 0x2270) == -1) goto LAB_14076ff8a;
    *(ulonglong *)(puVar10 + -8) = (ulonglong)(_DAT_150b0d53c + 0x2274);
    *(ulonglong *)(puVar10 + -0x10) = (ulonglong)*(uint *)(puVar10 + 0x3c);
    *(undefined8 *)(puVar10 + -0x18) = 0x14076fe10;
    iVar4 = FUN_1408c84e0();
    puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -0x10) + 8);
    if (iVar4 != 0) goto LAB_14076ff8a;
  }
  iVar4 = *(int *)(uVar16 + 0x22b8);
  iVar1 = *(int *)(uVar16 + 0x22d0);
  uVar2 = *(undefined8 *)(uVar16 + 0x22a0);
  *(undefined8 *)(puVar10 + 0x14) = *(undefined8 *)(uVar16 + 0x2298);
  *(undefined8 *)(puVar10 + 0x1c) = uVar2;
  fVar17 = ((float)((ulonglong)*(undefined8 *)(puVar10 + 0x1c) >> 0x20) -
           (float)((ulonglong)*(undefined8 *)(puVar10 + 0x14) >> 0x20)) *
           ((float)*(undefined8 *)(puVar10 + 0x1c) - (float)*(undefined8 *)(puVar10 + 0x14));
  iVar13 = 0;
  if (*(float *)(uVar16 + 0x22c8) <= fVar17 && fVar17 != *(float *)(uVar16 + 0x22c8))
  goto LAB_14076ff8a;
  uVar7 = *(uint *)(puVar10 + 0x40);
  *(uint *)(uVar16 + 0x22c0) = uVar7;
  *(int *)(uVar16 + 0x22cc) = iVar4;
  *(float *)(uVar16 + 0x22c8) = fVar17;
  *(bool *)(uVar16 + 0x2295) = iVar1 == iVar4;
  if ((iVar1 == iVar4) && (((*(uint *)(uVar16 + 0x2254) | uVar7) & 0x800) == 0)) {
    if (*(uint *)(uVar16 + 0x22bc) == 0) {
      *(ulonglong *)(puVar10 + -8) = (ulonglong)(puVar10 + 0x14) & 0xffffffff;
      *(undefined8 *)(puVar10 + -0x10) = 0x14076fefd;
      FUN_14077005d();
      puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -8) + 4);
    }
    else {
      puVar14 = (undefined8 *)(ulonglong)(uVar9 + 0x2298);
      *(ulonglong *)(puVar10 + -8) = (ulonglong)*(uint *)(uVar16 + 0x22bc);
      *(undefined8 *)(puVar10 + -0x10) = 0x14076fea6;
      uVar6 = FUN_140762bd3();
      puVar11 = (undefined4 *)(ulonglong)((int)(puVar10 + -8) + 4);
      uVar2 = puVar14[1];
      pfVar15 = (float *)((ulonglong)(puVar11 + 1) & 0xffffffff);
      *(undefined8 *)pfVar15 = *puVar14;
      *(undefined8 *)(pfVar15 + 2) = uVar2;
      fVar17 = pfVar15[1] + fRam0000000150a28cd1;
      fVar18 = pfVar15[2] + fRam0000000150a28cd5;
      fVar19 = pfVar15[3] + fRam0000000150a28cd9;
      *pfVar15 = *pfVar15 + _DAT_150a28ccd;
      pfVar15[1] = fVar17;
      pfVar15[2] = fVar18;
      pfVar15[3] = fVar19;
      *puVar11 = *(undefined4 *)(uVar16 + 0xd9c);
      *(undefined8 *)(puVar11 + -2) = uVar6;
      *(undefined8 *)(puVar11 + -4) = 0x14076fed3;
      uVar5 = FUN_1407567d0();
      puVar12 = (undefined4 *)(ulonglong)((int)(puVar11 + -2) - 8);
      puVar12[2] = puVar12[3];
      puVar12[1] = (int)(puVar11 + 1);
      *puVar12 = uVar5;
      *(undefined8 *)(puVar12 + -2) = 0x14076feee;
      FUN_14076ffaf();
      puVar10 = (undefined1 *)(ulonglong)((int)(puVar11 + -2) + 4);
    }
    uVar7 = *(uint *)(puVar10 + 0x40);
  }
  iVar8 = uVar9 + 0x2260;
  *(int *)(uVar16 + 0x22d4) = *(int *)(uVar16 + 4);
  if (((*(byte *)(uVar16 + 0x2254) & 0x10) == 0) || (*(int *)(uVar16 + 0x225c) != -1)) {
    if (iVar1 != iVar4) goto LAB_14076ff50;
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(uVar16 + 0x225c);
    *(undefined8 *)(puVar10 + -0x10) = 0x14076ff38;
    bVar3 = FUN_140762fdc();
    puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -8) + 4);
    bVar3 = bVar3 ^ 1;
  }
  else if (iVar1 == iVar4) {
    bVar3 = *(int *)(uVar16 + 0x2258) < *(int *)(uVar16 + 4);
  }
  else {
LAB_14076ff50:
    bVar3 = 0;
  }
  iVar13 = 0;
  if (bVar3 != 0) {
    iVar13 = iVar8;
  }
  if ((uVar7 & 0x400) != 0) {
    iVar13 = iVar8;
  }
  *(byte *)(uVar16 + 0x2296) = bVar3;
  if ((bVar3 != 0) && (iVar13 = iVar8, (*(byte *)(uVar16 + 0x27b4) & 2) != 0)) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(uVar16 + 0x22b8);
    *(undefined8 *)(puVar10 + -0x10) = 0x1034c84c;
    *(undefined8 *)(puVar10 + -0x18) = 0x14076ff85;
    FUN_1407518b6();
    puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -0x10) + 8);
  }
LAB_14076ff8a:
  if (_DAT_150af8c96 != (*(uint *)(puVar10 + 0x24) ^ (uint)puVar10)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + -8) = FUN_14076ffaf;
    FUN_1408802b0(*(uint *)(puVar10 + 0x24) ^ (uint)puVar10);
  }
  return iVar13;
}

