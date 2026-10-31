/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e188c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e188c(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_R12;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  fVar5 = _DAT_150a9898a;
  uVar14 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  puVar10 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x80);
  uVar9 = param_1 & 0xffffffff;
  fVar1 = *(float *)(uVar14 + 0xc);
  *(undefined1 (*) [16])(puVar10 + 0x20) = ZEXT416((uint)fVar1);
  uVar3 = *(uint *)(param_1 + 0x38);
  if (fVar5 <= fVar1) {
    iVar7 = *(int *)(uVar14 + 0x18) + uVar3;
    *(undefined4 *)(puVar10 + unaff_R12 + 0xc) = param_4;
    if (*(int *)(uVar9 + 0x3c) < iVar7) {
      *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(iVar7 * 8);
      *(undefined8 *)(puVar10 + -0x10) = 0x1407e18fa;
      uVar6 = FUN_1407520ca();
      puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -8) + 4);
      uVar9 = (ulonglong)*(uint *)(puVar10 + 0xc);
      uVar3 = *(uint *)(uVar9 + 0x40);
      if (uVar3 != 0) {
        *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x38) << 3);
        *(ulonglong *)(puVar10 + -0x10) = (ulonglong)uVar3;
        *(ulonglong *)(puVar10 + -0x18) = (ulonglong)uVar6;
        *(undefined8 *)(puVar10 + -0x20) = 0x1407e1918;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar9 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 0x10) = &UNK_1407e1923;
        FUN_14075219b();
      }
      *(uint *)(uVar9 + 0x40) = uVar6;
      *(int *)(uVar9 + 0x3c) = iVar7;
    }
    uVar9 = (ulonglong)*(uint *)(puVar10 + 0xc);
    if (-1 < *(int *)(uVar14 + 0x18)) {
      fVar1 = *(float *)(uVar14 + 0x14);
      iVar7 = *(int *)(uVar14 + 0x18);
      *(float *)(puVar10 + 0x14) = (float)iVar7;
      *(float *)(puVar10 + 0x18) = fVar1 - *(float *)(uVar14 + 0x10);
      uVar17 = *(undefined4 *)(puVar10 + 0x20);
      *(undefined4 *)(puVar10 + 0x20) = uVar17;
      *(undefined4 *)(puVar10 + 0x24) = uVar17;
      *(undefined4 *)(puVar10 + 0x28) = uVar17;
      *(undefined4 *)(puVar10 + 0x2c) = uVar17;
      *(int *)(puVar10 + 0x1c) = iVar7;
      do {
        dVar4 = (double)((0.0 / *(float *)(puVar10 + 0x14)) * *(float *)(puVar10 + 0x18) +
                        *(float *)(uVar14 + 0x10));
        *(double *)(puVar10 + 0x30) = dVar4;
        uVar3 = *(uint *)(uVar14 + 8);
        *(undefined1 (*) [16])(puVar10 + 0x60) = ZEXT416(((uint *)(ulonglong)uVar3)[1]);
        uVar6 = (int)puVar10 - 8;
        *(double *)(ulonglong)uVar6 = dVar4;
        ((double *)(ulonglong)uVar6)[-1] = 2.65657775155104e-314;
        FUN_1408c8380();
        *(double *)(puVar10 + 0x48) = (double)in_ST0;
        *(undefined1 (*) [16])(puVar10 + 0x50) = ZEXT416(*(uint *)(ulonglong)uVar3);
        puVar11 = (undefined8 *)(ulonglong)uVar6;
        *puVar11 = puVar11[7];
        puVar11[-1] = 0x1407e19d1;
        in_ST0 = in_ST2;
        in_ST2 = in_ST4;
        in_ST4 = in_ST6;
        in_ST6 = in_ST7;
        FUN_1408c5380();
        *(double *)(puVar10 + 0x40) = (double)in_ST1;
        uVar2 = *(undefined8 *)(puVar10 + 0x40);
        uVar17 = (undefined4)uVar2;
        uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
        uVar19 = (undefined4)*(undefined8 *)(puVar10 + 0x48);
        uVar20 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 0x48) >> 0x20);
        uVar3 = *(uint *)(uVar9 + 0x38);
        fVar16 = in_ST6;
        if (uVar3 == *(uint *)(uVar9 + 0x3c)) {
          *(undefined4 *)(puVar10 + 0x30) = *(undefined4 *)(puVar10 + 0x40);
          *(undefined4 *)(puVar10 + 0x34) = *(undefined4 *)(puVar10 + 0x44);
          *(undefined4 *)(puVar10 + 0x38) = *(undefined4 *)(puVar10 + 0x48);
          *(undefined4 *)(puVar10 + 0x3c) = uVar20;
          if (uVar3 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = (int)uVar3 / 2 + uVar3;
          }
          iVar8 = uVar3 + 1;
          if ((int)(uVar3 + 1) < iVar7) {
            iVar8 = iVar7;
          }
          *(int *)(puVar10 + 0x10) = iVar8;
          *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(iVar8 * 8);
          *(undefined8 *)(puVar10 + -0x10) = 0x1407e1a26;
          uVar6 = FUN_1407520ca();
          puVar10 = (undefined1 *)(ulonglong)((int)(puVar10 + -8) + 4);
          uVar15 = (ulonglong)uVar6;
          uVar9 = (ulonglong)*(uint *)(puVar10 + 0xc);
          uVar3 = *(uint *)(uVar9 + 0x40);
          if (uVar3 != 0) {
            *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x38) << 3);
            *(ulonglong *)(puVar10 + -0x10) = (ulonglong)uVar3;
            *(ulonglong *)(puVar10 + -0x18) = uVar15;
            *(undefined8 *)(puVar10 + -0x20) = 0x1407e1a44;
            FUN_1408b31a0();
            *(undefined8 *)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 8) =
                 *(undefined8 *)(uVar9 + 0x40);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((ulonglong)((int)(puVar10 + -0x18) + 0xc) - 0x10) = &UNK_1407e1a4f;
            FUN_14075219b();
          }
          *(uint *)(uVar9 + 0x40) = uVar6;
          *(undefined4 *)(uVar9 + 0x3c) = *(undefined4 *)(puVar10 + 0x10);
          uVar3 = *(uint *)(uVar9 + 0x38);
          uVar17 = *(undefined4 *)(puVar10 + 0x30);
          uVar18 = *(undefined4 *)(puVar10 + 0x34);
          uVar19 = *(undefined4 *)(puVar10 + 0x38);
          uVar20 = *(undefined4 *)(puVar10 + 0x3c);
        }
        else {
          uVar15 = (ulonglong)*(uint *)(uVar9 + 0x40);
        }
        *(ulonglong *)(uVar15 + (ulonglong)uVar3 * 8) =
             CONCAT44(*(float *)(puVar10 + 0x60) +
                      (float)(double)CONCAT44(uVar20,uVar19) * *(float *)(puVar10 + 0x24),
                      *(float *)(puVar10 + 0x50) +
                      (float)(double)CONCAT44(uVar18,uVar17) * *(float *)(puVar10 + 0x20));
        *(int *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + 1;
        in_ST1 = in_ST3;
        in_ST3 = in_ST5;
        in_ST5 = in_ST7;
        in_ST7 = fVar16;
      } while (*(int *)(unaff_R12 * 2 + 0x1c) != 0);
    }
  }
  else {
    if (uVar3 == *(uint *)(uVar9 + 0x3c)) {
      if (uVar3 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = (int)uVar3 / 2 + uVar3;
      }
      iVar8 = uVar3 + 1;
      if ((int)(uVar3 + 1) < iVar7) {
        iVar8 = iVar7;
      }
      *(ulonglong *)(puVar10 + -8) = (ulonglong)(uint)(iVar8 * 8);
      *(undefined8 *)(puVar10 + -0x10) = 0x1407e1aab;
      uVar6 = FUN_1407520ca();
      uVar12 = (ulonglong)((int)(puVar10 + -8) + 4);
      uVar15 = (ulonglong)uVar6;
      uVar3 = *(uint *)(uVar9 + 0x40);
      if (uVar3 != 0) {
        *(ulonglong *)(uVar12 - 8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x38) << 3);
        *(ulonglong *)(uVar12 - 0x10) = (ulonglong)uVar3;
        *(ulonglong *)(uVar12 - 0x18) = uVar15;
        *(undefined8 *)(uVar12 - 0x20) = 0x1407e1ac5;
        FUN_1408b31a0();
        uVar13 = (ulonglong)((int)(uVar12 - 0x18) + 0xc);
        *(undefined8 *)(uVar13 - 8) = *(undefined8 *)(uVar9 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar13 - 0x10) = &UNK_1407e1ad0;
        FUN_14075219b();
      }
      *(uint *)(uVar9 + 0x40) = uVar6;
      *(int *)(uVar9 + 0x3c) = iVar8;
      uVar3 = *(uint *)(uVar9 + 0x38);
    }
    else {
      uVar15 = (ulonglong)*(uint *)(uVar9 + 0x40);
    }
    *(undefined8 *)(uVar15 + (ulonglong)uVar3 * 8) = *(undefined8 *)(ulonglong)*(uint *)(uVar14 + 8)
    ;
    *(int *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + 1;
  }
  return;
}

