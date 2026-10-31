/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dae48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408dae48(void)

{
  double dVar1;
  undefined4 uVar2;
  ushort uVar3;
  double *pdVar4;
  ulonglong uVar5;
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
  
  uVar2 = _DAT_150c01009;
  uVar3 = ((ushort)((ulonglong)in_stack_00000004 >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar3 < 0x10c6) {
    dVar11 = (_DAT_150c00fcd * in_stack_00000004 + _DAT_150c00fe1) - _DAT_150c00fe1;
    dVar12 = (double)CONCAT44(_DAT_150c01009,_DAT_150c01005);
    dVar1 = (double)CONCAT17(DAT_150c01009,CONCAT43(_DAT_150c01005,_DAT_150c01002));
    pdVar4 = (double *)
             (ulonglong)
             (((int)ROUND(_DAT_150c00fcd * in_stack_00000004) + 0x1c7600U & 0x3f) * 0x20 +
             0x50c03658);
    dVar12 = dVar12 * dVar11;
    dVar6 = in_stack_00000004 - _DAT_150c01009 * dVar11;
    dVar16 = in_stack_00000004 - _DAT_150c01009 * dVar11;
    dVar17 = dVar16 - dVar12;
    dVar7 = dVar6 - dVar12;
    dVar9 = dVar6 - (double)CONCAT44(uRam0000000150c01011,DAT_150c01009_4) * dVar11;
    dVar8 = dVar7 * dVar7;
    dVar10 = dVar9 * dVar9;
    dVar13 = *pdVar4 + pdVar4[3];
    dVar14 = pdVar4[3] * dVar17;
    dVar15 = dVar14 + pdVar4[1];
    dVar18 = dVar17 * *pdVar4 + dVar15;
    _DAT_150c01009 = uVar2;
    *(double *)((ulonglong)((int)&stack0x00000000 - 0x10) + 4) =
         dVar18 + (dVar11 * _DAT_150c01055 - ((dVar16 - dVar17) - dVar12)) *
                  (pdVar4[1] * dVar17 - dVar13) + pdVar4[2] + (pdVar4[1] - dVar15) + dVar14 +
                  (dVar15 - dVar18) + dVar17 * *pdVar4 +
                  (_DAT_150c01022 * dVar8 + _DAT_150c01063 +
                  (dVar1 * dVar6 * dVar7 + _DAT_150c01077) * dVar8 * dVar8) *
                  dVar13 * dVar17 * dVar8 +
                  (dRam0000000150c0102a * dVar10 + dRam0000000150c0106b +
                  ((double)CONCAT17((undefined1)uRam0000000150c01011,
                                    (int7)((ulonglong)_DAT_150c01009 >> 8)) * dVar6 * dVar9 +
                  dRam0000000150c0107f) * dVar10 * dVar10) * pdVar4[1] * dVar10;
    return;
  }
  if ((short)uVar3 < 0x10c6) {
    uVar5 = (ulonglong)((int)&stack0x00000000 - 0x10);
    if (uVar3 >> 4 == 0xcfd) {
      *(double *)(uVar5 + 4) = in_stack_00000004 * _DAT_150c0115e;
      return;
    }
    *(double *)(uVar5 + 4) = in_stack_00000004;
    return;
  }
  FUN_1408dad8f();
  return;
}

