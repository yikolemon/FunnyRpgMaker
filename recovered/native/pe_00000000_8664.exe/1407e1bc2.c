/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e1bc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e1bc2(ulonglong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  ulonglong uVar8;
  longlong unaff_R14;
  int unaff_R15D;
  float10 in_ST0;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar6 = (int)&stack0xffffffffffffffe0;
  pdVar7 = (double *)(ulonglong)(iVar6 - 0xa0);
  param_1 = param_1 & 0xffffffff;
  fVar11 = *(float *)(uVar8 + 0xc);
  uVar1 = *(uint *)(uVar8 + 8);
  if (_DAT_150a98cc3 <= fVar11) {
    fVar15 = *(float *)(uVar8 + 0x14);
    fVar4 = *(float *)(uVar8 + 0x10);
    if ((int)*(float *)(uVar8 + 0x18) < 1) {
      if (fVar11 <= *(float *)((ulonglong)*(uint *)(param_1 + 0x2c) + 0x1d8)) {
        fVar11 = (fVar4 * _DAT_150a98f20) / _DAT_150a9b2cb;
        fVar16 = (_DAT_150a98f20 * fVar15) / _DAT_150a9b2cb;
        if (fVar4 <= fVar15) {
          *pdVar7 = (double)fVar11;
          *(undefined1 (*) [16])(pdVar7 + 4) = ZEXT416((uint)fVar16);
          pdVar7[-1] = 2.65657828909447e-314;
          FUN_1408c5280();
          fVar11 = *(float *)(pdVar7 + 4);
          *(float *)((longlong)pdVar7 + 0x6c) = (float)in_ST0;
          fVar15 = (float)(int)(float)(int)((int)fVar11 -
                                           (uint)(fVar11 < 0.0 && (float)(int)fVar11 != fVar11));
          fVar11 = (float)(int)*(float *)((longlong)pdVar7 + 0x6c);
          pdVar7[4] = (double)CONCAT44(fVar11,fVar15);
          pdVar7[5] = 0.0;
          *(float *)(pdVar7 + 7) = fVar15;
          *(float *)((longlong)pdVar7 + 0x3c) = fVar11;
        }
        else {
          *(undefined1 (*) [16])(pdVar7 + 4) =
               ZEXT416((uint)(float)(int)((int)fVar11 -
                                         (uint)((float)(int)fVar11 != fVar11 && fVar11 < 0.0)));
          *pdVar7 = (double)fVar16;
          pdVar7[-1] = 2.65657825599207e-314;
          FUN_1408c5280();
          *(float *)(pdVar7 + 0xd) = (float)in_ST0;
          fVar4 = *(float *)((longlong)pdVar7 + 0x24);
          fVar11 = (float)(int)*(float *)(pdVar7 + 0xd);
          fVar15 = (float)(int)*(float *)(pdVar7 + 4);
          *(float *)(pdVar7 + 4) = fVar11;
          *(float *)((longlong)pdVar7 + 0x24) = fVar15;
          *(float *)(pdVar7 + 5) = 0.0;
          *(int *)((longlong)pdVar7 + 0x2c) = (int)fVar4;
          *(float *)((longlong)pdVar7 + 0x3c) = fVar15;
          *(float *)(pdVar7 + 7) = fVar11;
        }
        *(int *)pdVar7 = (int)fVar15 - (int)fVar11;
        *(float *)((longlong)pdVar7 + 4) = 0.0;
        pdVar7[-1] = 2.65657834195949e-314;
        fVar16 = (float)FUN_140753b3a();
        auVar12._0_4_ =
             (float)(int)*(float *)(pdVar7 + 4) * _DAT_150ae31f5 +
             (float)(int)*(float *)(pdVar7 + 4) * _DAT_150ae31f5;
        auVar12._4_4_ =
             (float)(int)*(float *)((longlong)pdVar7 + 0x24) * fRam0000000150ae31f9 +
             (float)(int)*(float *)((longlong)pdVar7 + 0x24) * fRam0000000150ae31f9;
        auVar12._8_4_ =
             (float)(int)*(float *)(pdVar7 + 5) * fRam0000000150ae31fd +
             (float)(int)*(float *)(pdVar7 + 5) * fRam0000000150ae31fd;
        auVar12._12_4_ =
             (float)(int)*(float *)((longlong)pdVar7 + 0x2c) * fRam0000000150ae3201 +
             (float)(int)*(float *)((longlong)pdVar7 + 0x2c) * fRam0000000150ae3201;
        auVar12 = divps(auVar12,_DAT_150a9d29f);
        fVar4 = *(float *)(uVar8 + 0x14);
        fVar15 = *(float *)(uVar8 + 0x10);
        iVar2 = -(uint)(_DAT_150ae3230 <= (float)((uint)(fVar4 + auVar12._0_4_) & _DAT_150a6d299));
        iVar10 = -(uint)(fRam0000000150ae3234 <=
                        (float)((uint)(fVar15 + auVar12._4_4_) & uRam0000000150a6d29d));
        auVar14._4_4_ = iVar10;
        auVar14._0_4_ = iVar2;
        auVar14._8_4_ = iVar10;
        auVar14._12_4_ = iVar10;
        auVar13._8_8_ = auVar14._8_8_;
        auVar13._4_4_ = iVar2;
        auVar13._0_4_ = iVar2;
        fVar11 = (float)movmskpd(fVar11,auVar13);
        iVar2 = *(int *)(param_1 + 0x38);
        *(float *)(pdVar7 + 0xb) = fVar16;
        *(float *)(pdVar7 + 4) = fVar11;
        iVar2 = (uint)(byte)(SUB41(fVar11,0) >> 1) + ((uint)fVar11 & 1) + iVar2 + (int)fVar16;
        if (*(int *)(unaff_R14 + 0x3c) < unaff_R15D) {
          *(int *)pdVar7 = iVar2 * 8;
          pdVar7[-1] = 2.65657839877704e-314;
          fVar4 = (float)FUN_1407520ca();
          fVar15 = *(float *)(param_1 + 0x40);
          if (fVar15 != 0.0) {
            *(int *)(pdVar7 + 1) = *(int *)(param_1 + 0x38) << 3;
            *(float *)((longlong)pdVar7 + 4) = fVar15;
            *(float *)pdVar7 = fVar4;
            *(float *)(pdVar7 + 8) = fVar4;
            pdVar7[-1] = 2.65657841508121e-314;
            FUN_1408b31a0();
            *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
            pdVar7[-1] = (double)&UNK_1407e1ef8;
            FUN_14075219b();
          }
          *(float *)(param_1 + 0x40) = fVar4;
          *(int *)(param_1 + 0x3c) = iVar2;
          fVar4 = *(float *)(uVar8 + 0x14);
          fVar15 = *(float *)(uVar8 + 0x10);
        }
        fVar9 = in_ST2;
        if ((byte)(SUB41(fVar11,0) >> 1) != 0) {
          pdVar7[0xe] = (double)fVar15;
          uVar1 = *(uint *)(uVar8 + 8);
          *(undefined1 (*) [16])(pdVar7 + 8) = ZEXT416((uint)((float *)(ulonglong)uVar1)[1]);
          *pdVar7 = (double)fVar15;
          pdVar7[-1] = 2.65657845213613e-314;
          fVar9 = in_ST4;
          FUN_1408c8380();
          pdVar7[0x12] = (double)in_ST1;
          fVar11 = *(float *)(pdVar7 + 8);
          fVar15 = *(float *)((longlong)pdVar7 + 0x44);
          *(float *)(pdVar7 + 8) = *(float *)(ulonglong)uVar1;
          *(float *)((longlong)pdVar7 + 0x44) = fVar11;
          *(float *)(pdVar7 + 9) = 0.0;
          *(float *)((longlong)pdVar7 + 0x4c) = fVar15;
          *pdVar7 = pdVar7[0xe];
          pdVar7[-1] = 2.65657847041656e-314;
          in_ST1 = in_ST3;
          FUN_1408c5380();
          pdVar7[0x11] = (double)in_ST2;
          fVar11 = *(float *)(uVar8 + 0xc);
          fVar15 = fVar11 * (float)pdVar7[0x11] + *(float *)(pdVar7 + 8);
          fVar4 = fVar11 * (float)pdVar7[0x12] + *(float *)((longlong)pdVar7 + 0x44);
          uVar1 = *(uint *)(param_1 + 0x38);
          if (uVar1 == *(uint *)(param_1 + 0x3c)) {
            *(float *)(pdVar7 + 8) = fVar15;
            *(float *)((longlong)pdVar7 + 0x44) = fVar4;
            *(float *)(pdVar7 + 9) = fVar11 * 0.0 + *(float *)(pdVar7 + 9);
            *(float *)((longlong)pdVar7 + 0x4c) = fVar11 * 0.0 + *(float *)((longlong)pdVar7 + 0x4c)
            ;
            if (uVar1 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = (int)uVar1 / 2 + uVar1;
            }
            iVar10 = uVar1 + 1;
            if ((int)(uVar1 + 1) < iVar2) {
              iVar10 = iVar2;
            }
            *(int *)pdVar7 = iVar10 * 8;
            pdVar7[-1] = 2.65657852426971e-314;
            uVar5 = FUN_1407520ca();
            fVar11 = *(float *)(param_1 + 0x40);
            if (fVar11 != 0.0) {
              *(int *)(pdVar7 + 1) = *(int *)(param_1 + 0x38) << 3;
              *(float *)((longlong)pdVar7 + 4) = fVar11;
              *(uint *)pdVar7 = uVar5;
              pdVar7[-1] = 2.65657853958575e-314;
              FUN_1408b31a0();
              *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
              pdVar7[-1] = 2.65657854502047e-314;
              FUN_14075219b();
            }
            *(uint *)(param_1 + 0x40) = uVar5;
            *(int *)(param_1 + 0x3c) = iVar10;
            uVar1 = *(uint *)(param_1 + 0x38);
            fVar15 = *(float *)(pdVar7 + 8);
            fVar4 = *(float *)((longlong)pdVar7 + 0x44);
          }
          else {
            uVar5 = *(uint *)(param_1 + 0x40);
          }
          *(ulonglong *)((ulonglong)uVar5 + (ulonglong)uVar1 * 8) = CONCAT44(fVar4,fVar15);
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          fVar4 = *(float *)(uVar8 + 0x14);
        }
        uVar1 = *(uint *)(uVar8 + 8);
        if (0 < (int)*(float *)(pdVar7 + 0xb)) {
          *(float *)((longlong)pdVar7 + 0xc) = *(float *)(pdVar7 + 7);
          *(float *)(pdVar7 + 1) = *(float *)((longlong)pdVar7 + 0x3c);
          *(float *)((longlong)pdVar7 + 4) = *(float *)(uVar8 + 0xc);
          *(uint *)pdVar7 = uVar1;
          *(float *)(pdVar7 + 2) = 0.0;
          pdVar7[-1] = 2.65657858503979e-314;
          FUN_1407e157c(param_1);
          pdVar7 = (double *)(ulonglong)(iVar6 - 0xb4);
          fVar4 = *(float *)(uVar8 + 0x14);
        }
        if (((ulonglong)pdVar7[4] & 1) == 0) {
          return;
        }
        pdVar7[0xb] = (double)fVar4;
        *(undefined1 (*) [16])(pdVar7 + 4) = ZEXT416(((uint *)(ulonglong)uVar1)[1]);
        *pdVar7 = (double)fVar4;
        pdVar7[-1] = 2.6565786107312e-314;
        FUN_1408c8380();
        pdVar7[0x10] = (double)in_ST1;
        uVar5 = *(uint *)(pdVar7 + 4);
        uVar3 = *(uint *)((longlong)pdVar7 + 0x24);
        *(uint *)(pdVar7 + 4) = *(uint *)(ulonglong)uVar1;
        *(uint *)((longlong)pdVar7 + 0x24) = uVar5;
        *(uint *)(pdVar7 + 5) = 0;
        *(uint *)((longlong)pdVar7 + 0x2c) = uVar3;
        *pdVar7 = pdVar7[0xb];
        pdVar7[-1] = 2.65657862901163e-314;
        FUN_1408c5380();
        pdVar7[0xf] = (double)fVar9;
        fVar11 = *(float *)(uVar8 + 0xc);
        fVar15 = fVar11 * (float)pdVar7[0xf] + *(float *)(pdVar7 + 4);
        fVar4 = fVar11 * (float)pdVar7[0x10] + *(float *)((longlong)pdVar7 + 0x24);
        uVar1 = *(uint *)(param_1 + 0x38);
        if (uVar1 == *(uint *)(param_1 + 0x3c)) {
          *(float *)(pdVar7 + 4) = fVar15;
          *(float *)((longlong)pdVar7 + 0x24) = fVar4;
          *(float *)(pdVar7 + 5) = fVar11 * 0.0 + *(float *)(pdVar7 + 5);
          *(float *)((longlong)pdVar7 + 0x2c) = fVar11 * 0.0 + *(float *)((longlong)pdVar7 + 0x2c);
          if (uVar1 == 0) {
            iVar6 = 8;
          }
          else {
            iVar6 = (int)uVar1 / 2 + uVar1;
          }
          iVar2 = uVar1 + 1;
          if ((int)(uVar1 + 1) < iVar6) {
            iVar2 = iVar6;
          }
          *(int *)pdVar7 = iVar2 * 8;
          pdVar7[-1] = 2.65657867990039e-314;
          uVar5 = FUN_1407520ca();
          uVar1 = *(uint *)(param_1 + 0x40);
          if (uVar1 != 0) {
            *(int *)(pdVar7 + 1) = *(int *)(param_1 + 0x38) << 3;
            *(uint *)((longlong)pdVar7 + 4) = uVar1;
            *(uint *)pdVar7 = uVar5;
            pdVar7[-1] = 2.65657869521643e-314;
            FUN_1408b31a0();
            *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
            pdVar7[-1] = 2.65657870065115e-314;
            FUN_14075219b();
          }
          *(uint *)(param_1 + 0x40) = uVar5;
          *(int *)(param_1 + 0x3c) = iVar2;
          uVar1 = *(uint *)(param_1 + 0x38);
          fVar15 = *(float *)(pdVar7 + 4);
          fVar4 = *(float *)((longlong)pdVar7 + 0x24);
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x40);
        }
        *(ulonglong *)((ulonglong)uVar5 + (ulonglong)uVar1 * 8) = CONCAT44(fVar4,fVar15);
        goto LAB_1407e1d38;
      }
      *(undefined1 (*) [16])(pdVar7 + 4) = ZEXT416((uint)(fVar15 - fVar4) & _DAT_150a6d06e);
      *(float *)pdVar7 = fVar11;
      pdVar7[-1] = 2.65657809986732e-314;
      iVar2 = FUN_1407dffbe(param_1);
      pdVar7 = (double *)(ulonglong)(iVar6 - 0xa4);
      *pdVar7 = (double)(((float)iVar2 * *(float *)(pdVar7 + 4)) / _DAT_150a9b1f3);
      pdVar7[-1] = 2.65657811864182e-314;
      FUN_1408c5280();
      *(float *)((longlong)pdVar7 + 100) = (float)in_ST0;
      *(int *)pdVar7 = (int)*(float *)((longlong)pdVar7 + 100);
      *(int *)((longlong)pdVar7 + 4) = 1;
      pdVar7[-1] = 2.65657813148753e-314;
      iVar6 = FUN_140753b3a();
      *(int *)(pdVar7 + 2) = iVar6;
      *(int *)((longlong)pdVar7 + 0xc) = *(int *)(uVar8 + 0x14);
      *(int *)(pdVar7 + 1) = *(int *)(uVar8 + 0x10);
      *(int *)((longlong)pdVar7 + 4) = *(int *)(uVar8 + 0xc);
    }
    else {
      *(float *)(pdVar7 + 2) = *(float *)(uVar8 + 0x18);
      *(float *)((longlong)pdVar7 + 0xc) = fVar15;
      *(float *)(pdVar7 + 1) = fVar4;
      *(float *)((longlong)pdVar7 + 4) = fVar11;
    }
    *(uint *)pdVar7 = uVar1;
    *(uint *)((longlong)pdVar7 + -8) = 0x407e1cde;
    *(uint *)((longlong)pdVar7 + -4) = 1;
    FUN_1407e188c(param_1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x38);
    if (uVar5 == *(uint *)(param_1 + 0x3c)) {
      if (uVar5 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = (int)uVar5 / 2 + uVar5;
      }
      iVar2 = uVar5 + 1;
      if ((int)(uVar5 + 1) < iVar6) {
        iVar2 = iVar6;
      }
      *(int *)pdVar7 = iVar2 * 8;
      pdVar7[-1] = 2.65657816804838e-314;
      uVar3 = FUN_1407520ca();
      fVar11 = *(float *)(param_1 + 0x40);
      if (fVar11 != 0.0) {
        *(int *)(pdVar7 + 1) = *(int *)(param_1 + 0x38) << 3;
        *(float *)((longlong)pdVar7 + 4) = fVar11;
        *(uint *)pdVar7 = uVar3;
        pdVar7[-1] = 2.65657818336442e-314;
        FUN_1408b31a0();
        *(undefined4 *)pdVar7 = *(undefined4 *)(param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
        pdVar7[-1] = 2.65657818879914e-314;
        FUN_14075219b();
      }
      *(uint *)(param_1 + 0x40) = uVar3;
      *(int *)(param_1 + 0x3c) = iVar2;
      uVar5 = *(uint *)(param_1 + 0x38);
      uVar1 = *(uint *)(uVar8 + 8);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x40);
    }
    *(undefined8 *)((ulonglong)uVar3 + (ulonglong)uVar5 * 8) = *(undefined8 *)(ulonglong)uVar1;
LAB_1407e1d38:
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

