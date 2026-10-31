/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140766401 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140766401(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  ulonglong uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  
  uVar12 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x44);
  puVar15 = (undefined8 *)(ulonglong)*(uint *)(uVar12 + 0x58);
  uVar1 = *(uint *)(uVar12 + 0x5c);
  uVar7 = (ulonglong)uVar1;
  uVar14 = (ulonglong)_DAT_150b03b6d;
  uVar11 = uVar12 + 0x30 & 0xffffffff;
  *(ulonglong *)(uVar12 - 8) = uVar7;
  *(ulonglong *)(uVar12 - 0x10) = uVar11;
  *(undefined8 *)(uVar12 - 0x18) = 0x14076642c;
  FUN_14076ed5e();
  pauVar13 = (undefined1 (*) [16])(ulonglong)((int)(uVar12 - 0x10) + 8);
  uVar2 = *(uint *)(uVar7 + 0xc);
  if ((uVar2 >> 0x1c & 1) == 0) {
    if ((uVar2 >> 0x1a & 1) == 0) {
      if ((uVar2 >> 0x19 & 1) == 0) {
        *puVar15 = *(undefined8 *)(uVar7 + 0x50);
        goto LAB_140766517;
      }
      *pauVar13 = ZEXT416(*(uint *)(uVar14 + 0xdf0));
      *(undefined8 *)(pauVar13[-1] + 8) = 0x14076654f;
      FUN_14076dfd8((ulonglong)(pauVar13[1] + 8) & 0xffffffff,0x2000000);
      if (*(int *)(uVar14 + 0xfc) == 1) {
        *(undefined8 *)(pauVar13[-1] + 8) = 0x140766562;
        iVar6 = FUN_14076edd8(0x2000000);
        fVar16 = *(float *)(pauVar13[1] + 8);
        if (iVar6 != 1) goto LAB_1407665d5;
        fVar21 = *(float *)*pauVar13;
        fVar19 = (float)*(undefined8 *)(uVar7 + 0x58);
        fVar20 = (float)((ulonglong)*(undefined8 *)(uVar7 + 0x58) >> 0x20);
        fVar17 = fVar21 * 0.0 + fVar16 + (float)_DAT_150a1f251 * fVar19;
        fVar18 = _DAT_150a1d625 * fVar21 + *(float *)(pauVar13[1] + 0xc) +
                 (float)((ulonglong)_DAT_150a1f251 >> 0x20) * fVar20;
        *puVar15 = CONCAT44(fVar18,fVar17);
        auVar3._4_4_ = -(uint)(*(float *)(pauVar13[3] + 4) <= fVar18);
        auVar3._0_4_ = -(uint)(*(float *)pauVar13[3] <= fVar17);
        auVar3._8_4_ = -(uint)(fVar19 + fVar17 <= *(float *)(pauVar13[3] + 8));
        auVar3._12_4_ = -(uint)(fVar20 + fVar18 <= *(float *)(pauVar13[3] + 0xc));
        iVar6 = movmskps(1,auVar3);
        if (iVar6 == 0xf) goto LAB_140766517;
      }
      else {
        fVar16 = *(float *)(pauVar13[1] + 8);
LAB_1407665d5:
        fVar21 = *(float *)*pauVar13;
      }
      fVar17 = *(float *)(pauVar13[1] + 0xc);
      *(ulonglong *)pauVar13[1] =
           CONCAT44((float)((ulonglong)_DAT_150a1f2b5 >> 0x20) * fVar21 + fVar17,
                    (float)_DAT_150a1f2b5 * fVar21 + fVar16);
      *(undefined8 *)pauVar13[2] = 0;
      *(undefined8 *)(pauVar13[2] + 8) = 0;
      if (((*(char *)(uVar14 + 0x2040) != '\x01') || (*(char *)(uVar14 + 0x2041) != '\x01')) ||
         (uVar22 = _DAT_150a1f335, *(char *)(uVar14 + 0x66) != '\0')) {
        uVar22 = CONCAT44(fVar21 * fRam0000000150a1f314,fVar21 * _DAT_150a1f310);
      }
      puVar9 = (undefined8 *)((ulonglong)(pauVar13 + 2) & 0xffffffff);
      *puVar9 = CONCAT44(fVar17 + fRam0000000150a1f32e,fVar16 + _DAT_150a1f32a);
      puVar9[1] = CONCAT44((float)((ulonglong)uVar22 >> 0x20) + fVar17,(float)uVar22 + fVar16);
      *(undefined8 *)(pauVar13[-1] + 8) = 2;
      *(undefined8 **)pauVar13[-1] = puVar9;
      *(ulonglong *)(pauVar13[-2] + 8) = uVar11;
      *(ulonglong *)pauVar13[-2] = (ulonglong)(uVar1 + 0x114);
      *(ulonglong *)(pauVar13[-3] + 8) = (ulonglong)(uVar1 + 0x58);
      *(ulonglong *)pauVar13[-3] = (ulonglong)(pauVar13 + 1) & 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(uVar7 + 0x50);
      uVar5 = *(undefined4 *)(uVar7 + 0x54);
      puVar10 = (undefined4 *)((ulonglong)(pauVar13 + 2) & 0xffffffff);
      *puVar10 = uVar4;
      puVar10[1] = uVar5;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      *(undefined8 *)(pauVar13[-1] + 8) = 0;
      *(undefined4 **)pauVar13[-1] = puVar10;
      *(ulonglong *)(pauVar13[-2] + 8) = uVar11;
      *(ulonglong *)pauVar13[-2] = (ulonglong)(uVar1 + 0x114);
      *(ulonglong *)(pauVar13[-3] + 8) = (ulonglong)(uVar1 + 0x58);
      *(ulonglong *)pauVar13[-3] = (ulonglong)(uVar1 + 0x50);
    }
  }
  else {
    uVar7 = (ulonglong)*(uint *)(uVar7 + 0x3a0);
    if (*(char *)(uVar7 + 0x1a7) == '\x01') {
      fVar16 = _DAT_150a1ee35;
      fVar21 = *(float *)(uVar7 + 0x290);
      fVar17 = *(float *)(uVar7 + 0x298);
      fVar18 = _DAT_150a1ee31;
    }
    else {
      fVar18 = ((*(float *)(uVar7 + 0x58) + *(float *)(uVar7 + 0x50)) - *(float *)(uVar14 + 0xd24))
               - *(float *)(uVar7 + 0xec);
      fVar16 = *(float *)(uVar14 + 0xd24) + *(float *)(uVar7 + 0x50);
      fVar21 = _DAT_150a1ee94;
      fVar17 = _DAT_150a1ee90;
    }
    pfVar8 = (float *)((ulonglong)(pauVar13 + 2) & 0xffffffff);
    *pfVar8 = fVar16;
    pfVar8[1] = fVar21;
    pfVar8[2] = fVar18;
    pfVar8[3] = fVar17;
    *(undefined8 *)(pauVar13[-1] + 8) = 0;
    *(float **)pauVar13[-1] = pfVar8;
    *(ulonglong *)(pauVar13[-2] + 8) = uVar11;
    *(ulonglong *)pauVar13[-2] = (ulonglong)(uVar1 + 0x114);
    *(ulonglong *)(pauVar13[-3] + 8) = (ulonglong)(uVar1 + 0x58);
    *(ulonglong *)pauVar13[-3] = (ulonglong)(uVar1 + 0x50);
  }
  *(undefined8 **)(pauVar13[-4] + 8) = puVar15;
  *(undefined8 *)pauVar13[-4] = 0x140766514;
  FUN_14076e99d();
  pauVar13 = (undefined1 (*) [16])(ulonglong)((int)pauVar13[-4] + 0x24);
LAB_140766517:
  if (_DAT_150aef223 != (*(uint *)((longlong)pauVar13 + 0x40) ^ (uint)pauVar13)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)pauVar13 + -8) = FUN_140766662;
    FUN_1408802b0(*(uint *)((longlong)pauVar13 + 0x40) ^ (uint)pauVar13);
  }
  return puVar15;
}

