/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6158 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d6158(void)

{
  ushort uVar1;
  double dVar2;
  undefined4 uVar3;
  ushort uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double in_stack_00000004;
  
  uVar3 = _DAT_150bfbe49;
  uVar1 = (ushort)((ulonglong)in_stack_00000004 >> 0x30);
  uVar4 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar4 < 0x10c6) {
    dVar11 = (_DAT_150bfbe0d * in_stack_00000004 + _DAT_150bfbe21) - _DAT_150bfbe21;
    dVar12 = (double)CONCAT44(_DAT_150bfbe49,_DAT_150bfbe45);
    dVar2 = (double)CONCAT17(DAT_150bfbe49,CONCAT43(_DAT_150bfbe45,_DAT_150bfbe42));
    pdVar5 = (double *)
             (ulonglong)
             (((int)ROUND(_DAT_150bfbe0d * in_stack_00000004) + 0x1c7610U & 0x3f) * 0x20 +
             0x50bfe968);
    dVar12 = dVar12 * dVar11;
    dVar6 = in_stack_00000004 - _DAT_150bfbe49 * dVar11;
    dVar16 = in_stack_00000004 - _DAT_150bfbe49 * dVar11;
    dVar17 = dVar16 - dVar12;
    dVar7 = dVar6 - dVar12;
    dVar9 = dVar6 - (double)CONCAT44(uRam0000000150bfbe51,DAT_150bfbe49_4) * dVar11;
    dVar8 = dVar7 * dVar7;
    dVar10 = dVar9 * dVar9;
    dVar13 = *pdVar5 + pdVar5[3];
    dVar14 = pdVar5[3] * dVar17;
    dVar15 = dVar14 + pdVar5[1];
    dVar18 = dVar17 * *pdVar5 + dVar15;
    _DAT_150bfbe49 = uVar3;
    *(double *)((ulonglong)((int)&stack0x00000000 - 0x10) + 4) =
         dVar18 + (dVar11 * _DAT_150bfbe95 - ((dVar16 - dVar17) - dVar12)) *
                  (pdVar5[1] * dVar17 - dVar13) + pdVar5[2] + (pdVar5[1] - dVar15) + dVar14 +
                  (dVar15 - dVar18) + dVar17 * *pdVar5 +
                  (_DAT_150bfbe62 * dVar8 + _DAT_150bfbea3 +
                  (dVar2 * dVar6 * dVar7 + _DAT_150bfbeb7) * dVar8 * dVar8) *
                  dVar13 * dVar17 * dVar8 +
                  (dRam0000000150bfbe6a * dVar10 + dRam0000000150bfbeab +
                  ((double)CONCAT17((undefined1)uRam0000000150bfbe51,
                                    (int7)((ulonglong)_DAT_150bfbe49 >> 8)) * dVar6 * dVar9 +
                  dRam0000000150bfbebf) * dVar10 * dVar10) * pdVar5[1] * dVar10;
    return;
  }
  if ((short)uVar4 < 0x10c6) {
    *(double *)((ulonglong)((int)&stack0x00000000 - 0x10) + 4) =
         _DAT_150bfbfb2 -
         (double)((ulonglong)in_stack_00000004 & 0xffffffffffff |
                 (ulonglong)(uVar1 & 0x7fff) << 0x30);
    return;
  }
  FUN_1408d609f();
  return;
}

