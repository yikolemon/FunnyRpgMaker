/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a1e03 */

/* WARNING: Instruction at (ram,0x0001407a1fa3) overlaps instruction at (ram,0x0001407a1fa2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a1e03(undefined4 param_1,ulonglong param_2)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_R12;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  puVar7 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  puVar7[2] = param_1;
  uVar2 = puVar7[10];
  uVar8 = (ulonglong)_DAT_150b3f568;
  *(int *)(unaff_R12 + 0xc) = (int)param_2;
  lVar9 = 0;
  bVar4 = true;
  do {
    bVar3 = bVar4;
    lVar6 = 0;
    fVar11 = *(float *)(uVar8 + 0xe4 + lVar9 * 4);
    fVar10 = *(float *)((ulonglong)uVar2 + 8 + lVar9 * 4);
    if ((fVar10 < fVar11) || (fVar10 = *(float *)((ulonglong)uVar2 + lVar9 * 4), fVar11 < fVar10)) {
      fVar11 = fVar11 - fVar10;
      if ((((fVar11 != 0.0) || (NAN(fVar11))) &&
          ((fVar10 = *(float *)(param_2 + 0xc4 + lVar9 * 4), 0.0 <= fVar11 || (0.0 <= fVar10)))) &&
         ((uVar12 = 0, fVar11 <= 0.0 ||
          (uVar12 = _DAT_150a2d2b6, fVar10 < *(float *)(param_2 + 0xcc + lVar9 * 4))))) {
        fVar1 = *(float *)(uVar8 + 0x1228);
        fVar13 = ((float)((uint)fVar11 & _DAT_150a2d2a6) - fVar1) / (fVar1 * _DAT_150a58fa9 - fVar1)
        ;
        fVar14 = _DAT_150a2d2ed;
        if (fVar13 <= _DAT_150a2d2ed) {
          fVar14 = fVar13;
        }
        fVar11 = (float)(~-(uint)(fVar11 < 0.0) & uVar12 | -(uint)(fVar11 < 0.0) & _DAT_150a5a958) *
                 fVar1 * _DAT_150a5adad *
                 (float)(-(uint)(fVar13 < 0.0) & _DAT_150a2d313 |
                        ~-(uint)(fVar13 < 0.0) & (uint)(fVar14 * _DAT_150a58b24 + _DAT_150a2d2ed)) *
                 *(float *)(uVar8 + 0x48) +
                 *(float *)((ulonglong)(uint)puVar7[2] + 0x20 + lVar9 * 4);
        *(float *)((ulonglong)(uint)puVar7[2] + 0x20 + lVar9 * 4) = fVar11;
        iVar5 = (int)fVar11 - (uint)(fVar11 < 0.0 && (float)(int)fVar11 != fVar11);
        lVar6 = 1;
        if (iVar5 != 0) {
          fVar11 = (float)iVar5;
          puVar7[4] = fVar11;
          fVar10 = fVar10 + fVar11;
          lVar6 = lVar9;
          if (bVar3) {
            puVar7[1] = fVar10;
            *puVar7 = (int)param_2;
            *(undefined8 *)(puVar7 + -2) = 0x1407a1f73;
            FUN_14076d7e1();
          }
          else {
            puVar7[1] = fVar10;
            *puVar7 = (int)param_2;
            *(undefined8 *)(puVar7 + -2) = 0x1407a1f83;
            FUN_14076d802();
          }
        }
      }
    }
    *(float *)((ulonglong)(uint)puVar7[2] + 0x20 + lVar6 * 4) =
         *(float *)((ulonglong)(uint)puVar7[2] + 0x20 + lVar6 * 4) - (float)puVar7[4];
    param_2 = (ulonglong)(uint)puVar7[3];
    lVar9 = lVar6;
    bVar4 = false;
  } while (bVar3);
  return;
}

