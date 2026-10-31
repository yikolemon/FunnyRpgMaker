/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f087 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076f087(void)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint unaff_EBP;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  ulonglong uStack_28;
  int iVar14;
  
  puVar8 = &stack0xffffffffffffffe0;
  uVar7 = (ulonglong)unaff_EBP;
  iVar14 = (int)((ulonglong)unaff_RBX >> 0x20);
  uVar11 = (ulonglong)_DAT_150b0c7e5;
  if (*(uint *)(uVar11 + 0x2048) != unaff_EBP) {
    uStack_28 = uVar7;
    FUN_14076a25c();
    puVar8 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
  }
  uVar2 = *(uint *)(uVar7 + 0x19c);
  *(int *)(uVar11 + 0x2044) = iVar14;
  *(uint *)(uVar11 + 0x2050) = uVar2;
  *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(uVar11 + 0x1e3c);
  *(undefined8 *)(puVar8 + -0x10) = 0x14076f0c7;
  FUN_140769fa9();
  uVar9 = (ulonglong)((int)(puVar8 + -8) + 4);
  *(int *)(uVar7 + 0x3c4 + (ulonglong)uVar2 * 4) = iVar14;
  uVar6 = 0;
  if (*(int *)(uVar11 + 0x1e80) == iVar14) {
    fVar3 = *(float *)(uVar11 + 0x1ea0);
    fVar4 = *(float *)(uVar11 + 0x1ea4);
    fVar5 = *(float *)(uVar11 + 0x1ea8);
    fVar12 = (float)*(undefined8 *)(uVar7 + 0x154);
    fVar13 = (float)((ulonglong)*(undefined8 *)(uVar7 + 0x154) >> 0x20);
    pfVar1 = (float *)(uVar7 + 0x3cc + (ulonglong)(uVar2 << 4));
    *pfVar1 = *(float *)(uVar11 + 0x1e9c) - fVar12;
    pfVar1[1] = fVar3 - fVar13;
    pfVar1[2] = fVar4 - fVar12;
    pfVar1[3] = fVar5 - fVar13;
    uVar6 = 0;
    if (*(int *)(uVar11 + 0x1e80) == iVar14) {
      uVar6 = *(undefined4 *)(uVar11 + 0x1e84);
    }
  }
  *(undefined4 *)(uVar11 + 0x2054) = uVar6;
  if (iVar14 == *(int *)(uVar11 + 0x152c)) {
    *(undefined1 *)(uVar11 + 0x2043) = 1;
  }
  if ((*(uint *)(uVar11 + 0x1548) & 0xfffffffe) == 2) {
    *(undefined1 *)(uVar11 + 0x2041) = 1;
  }
  else if (*(char *)(uVar11 + 0x6a) == '\x01') {
    *(undefined1 *)(uVar11 + 0x2040) = 0;
  }
  *(undefined8 *)(uVar9 - 8) = 0;
  *(undefined8 *)(uVar9 - 0x10) = 0x14076f149;
  FUN_14076eff3();
  uVar10 = (ulonglong)((int)(uVar9 - 8) + 4);
  *(undefined8 *)(uVar10 - 8) = 1;
  *(undefined8 *)(uVar10 - 0x10) = 0x14076f153;
  FUN_14076eff3();
  return;
}

