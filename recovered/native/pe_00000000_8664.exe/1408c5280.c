/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c5280(void)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  ushort *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  double *pdVar11;
  ulonglong uVar12;
  double *pdVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  bool bVar15;
  undefined2 in_FPUControlWord;
  float10 in_ST0;
  undefined1 auVar16 [16];
  ulonglong in_stack_00000004;
  
  if (1 < _DAT_150c62a3b) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = in_stack_00000004;
    roundsd(auVar16,auVar16,10);
    return;
  }
  if (_DAT_150c6a6e3 != 0) {
    puVar7 = (ushort *)(ulonglong)((int)&stack0x00000000 - 8);
    *(undefined4 *)(puVar7 + 2) = MXCSR;
    bVar15 = false;
    if ((*(uint *)(puVar7 + 2) & 0x7f80) == 0x1f80) {
      *puVar7 = in_FPUControlWord;
      bVar15 = (*puVar7 & 0x7f) == 0x7f;
    }
    register0x00000020 = (BADSPACEBASE *)((ulonglong)(puVar7 + 4) & 0xffffffff);
    if (bVar15) {
      FUN_1408c52a0();
      return;
    }
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBP;
  uVar14 = (ulonglong)((longlong)register0x00000020 + -8) & 0xffffffff;
  uVar8 = (ulonglong)((int)(undefined1 *)((longlong)register0x00000020 + -8) - 0x10);
  *(undefined8 *)(uVar8 - 8) = unaff_RBX;
  *(undefined8 *)(uVar8 - 0x10) = 0xffff;
  *(undefined8 *)(uVar8 - 0x18) = 0x1b3f;
  *(undefined8 *)(uVar8 - 0x20) = 0x1408d5f68;
  uVar4 = FUN_1408d9120();
  uVar6 = (ulonglong)uVar4;
  puVar9 = (undefined8 *)(uVar8 - 0x18 & 0xffffffff);
  uVar3 = *(uint *)(uVar14 + 0xc);
  *puVar9 = *(undefined8 *)(uVar14 + 8);
  if ((uVar3 & 0x7ff00000) != 0x7ff00000) {
    puVar9[-1] = 0x1408d5feb;
    FUN_1408deda0();
    dVar1 = *(double *)(uVar14 + 8);
    uVar12 = (ulonglong)((int)(uVar8 - 0x18) + 8);
    *(double *)(uVar14 - 0x10) = (double)in_ST0;
    *(double *)(uVar14 - 8) = (double)in_ST0;
    dVar2 = *(double *)(uVar14 - 8);
    if ((dVar2 != dVar1) && ((uVar4 & 0x20) == 0)) {
      *(ulonglong *)(uVar12 - 8) = uVar6;
      pdVar13 = (double *)(ulonglong)((int)(uVar12 - 8) - 0x10);
      pdVar13[1] = dVar2;
      *pdVar13 = dVar1;
      pdVar13[-1] = 5.92878775009496e-323;
      pdVar13[-2] = 7.90505033345994e-323;
      pdVar13[-3] = 2.65707235029372e-314;
      FUN_1408d8690();
      return;
    }
    *(undefined8 *)(uVar12 - 8) = 0xffff;
    *(ulonglong *)(uVar12 - 0x10) = uVar6;
    *(undefined8 *)(uVar12 - 0x18) = 0x1408d6038;
    FUN_1408d9120();
    return;
  }
  puVar9[-1] = 0x1408d5f8e;
  iVar5 = FUN_1408c65d0();
  uVar10 = (ulonglong)((int)(uVar8 - 0x18) + 8);
  if (((iVar5 != 1) && (iVar5 != 2)) && (iVar5 != 3)) {
    dVar1 = *(double *)(uVar14 + 8);
    *(ulonglong *)(uVar10 - 8) = uVar6;
    pdVar11 = (double *)(ulonglong)((int)(uVar10 - 8) - 0x10);
    pdVar11[1] = dVar1 + _DAT_150b613ec;
    *pdVar11 = dVar1;
    pdVar11[-1] = 5.92878775009496e-323;
    pdVar11[-2] = 3.95252516672997e-323;
    pdVar11[-3] = 2.65707230434561e-314;
    FUN_1408d8690();
    return;
  }
  *(undefined8 *)(uVar10 - 8) = 0xffff;
  *(ulonglong *)(uVar10 - 0x10) = uVar6;
  *(undefined8 *)(uVar10 - 0x18) = 0x1408d5fdb;
  FUN_1408d9120();
  return;
}

