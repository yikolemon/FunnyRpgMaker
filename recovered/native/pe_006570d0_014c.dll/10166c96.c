/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10166c96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10166c96(undefined4 param_1,float param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack_1e4;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_18;
  
  iVar6 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar2 == 0) {
    FUN_100fcef5();
  }
  else {
    iVar3 = *(int *)(DAT_1039d74c + 0x14cc);
    iVar4 = *(int *)(iVar3 + 0x2e8);
    if ((param_3 == 0.0) && (!NAN(param_3))) {
      fVar19 = (float10)FUN_10165f37();
      param_3 = (float)fVar19;
    }
    fVar26 = DAT_102b9bb4 + param_2;
    dVar24 = (double)fVar26;
    fVar19 = (float10)FUN_1026d4b0(dVar24);
    fVar20 = (float10)FUN_102704b0(dVar24);
    fVar21 = (float)fVar19;
    fVar25 = (float)fVar20;
    fStack_1a4 = fVar21;
    if (param_2 < 0.0) {
      dVar24 = (double)(fVar26 + DAT_102b9604);
      fVar19 = (float10)FUN_1026d4b0(dVar24);
      fStack_1a4 = (float)fVar19;
      FUN_102704b0(dVar24);
    }
    fVar26 = *(float *)(iVar6 + 0xd2c) + *(float *)(iVar6 + 0xd2c) + *(float *)(iVar6 + 0x1228);
    fVar27 = (float)((uint)fVar25 ^ _DAT_1028f620);
    fVar26 = (float)(int)(float)((uint)(param_3 * fVar25 +
                                       (float)(~-(uint)(param_2 < 0.0) &
                                               ((uint)fVar26 ^ _DAT_1028f620) |
                                              -(uint)(param_2 < 0.0) & (uint)fVar26) * fVar21) &
                                _DAT_1028b410);
    *(float *)(iVar2 + 0xbc) = fVar26;
    *(uint *)(iVar2 + 0xc0) = -(uint)(fVar25 != fVar27) & (uint)(fVar21 / fVar25);
    fVar29 = fVar26 / fVar27;
    FUN_10165364(1,fVar26);
    FUN_101657a1();
    fVar26 = *(float *)(iVar2 + 0x54);
    uStack_50 = *(undefined4 *)(iVar2 + 0xe4);
    uStack_48 = *(undefined4 *)(iVar2 + 0xec);
    uVar15 = *(undefined4 *)(iVar2 + 0x108);
    uStack_4c = uVar15;
    fStack_44 = fVar26;
    FUN_1018de6c(iVar4,0);
    fStack_1a0 = *(float *)(iVar2 + 0x104);
    if (0 < *(short *)(iVar2 + 0x1e2)) {
      fVar19 = (float10)FUN_100fdbca(fStack_1a0,
                                     *(undefined4 *)
                                      (*(int *)(iVar2 + 0x10) + 0xc +
                                      *(short *)(*(int *)(iVar2 + 0x18) + -2 +
                                                *(short *)(iVar2 + 0x1e2) * 2) * 0x74));
      fStack_1a0 = (float)fVar19;
    }
    FUN_10165294(1,0,0xffffffff);
    FUN_1010a52a(iVar2 + 0x104,iVar2 + 0x10c,0);
    uVar9 = FUN_100fcb39(0x30,0x3e800000);
    fStack_40 = *(float *)(iVar2 + 0x10c);
    uStack_68 = *(undefined4 *)(iVar2 + 0x104);
    uStack_64 = uVar15;
    fStack_3c = fVar26;
    FUN_1018b85a(&uStack_68,&fStack_40,uVar9,0,0);
    fStack_3c = *(float *)(iVar2 + 0x108);
    fStack_40 = fStack_1a0;
    FUN_1010a52a(&fStack_40,iVar2 + 0x10c,1);
    FUN_1012d77e(&uStack_50,param_1,0,0,0);
    FUN_10103c09();
    FUN_100fdbca((*(float *)(iVar6 + 0x1228) -
                 *(float *)(*(int *)(iVar6 + 0x1224) + 0x34) * *(float *)(iVar6 + 0x1230)) *
                 DAT_102b70e0,0);
    fVar26 = *(float *)(&DAT_102b8c18 + (uint)(param_2 < 0.0) * 4);
    fVar1 = *(float *)(iVar6 + 0xd8c);
    fVar22 = (float)((uint)*(float *)(iVar6 + 0xd2c) ^ _DAT_1028f620);
    param_3 = param_3 - *(float *)(iVar6 + 0xd30);
    fVar28 = (float)((uint)(*(float *)(iVar6 + 0xd2c) * fVar21) & _DAT_1028b410);
    fVar30 = (float)((uint)(*(float *)(iVar6 + 0xd30) * fVar25) | _DAT_1028f620);
    bVar8 = false;
    fStack_1e4 = DAT_102b89b0;
    bVar7 = true;
    do {
      bVar5 = bVar7;
      if (0 < param_5) {
        iVar17 = 0;
        do {
          iVar10 = (int)*(short *)(param_4 + iVar17 * 0x10);
          iVar16 = *(int *)(iVar2 + 0x10);
          iVar11 = iVar10 * 0x74;
          fStack_40 = *(float *)(iVar16 + 0xc + iVar11);
          fStack_3c = fStack_44;
          fStack_38 = *(float *)(iVar16 + 8 + iVar11);
          fStack_34 = fStack_44;
          fStack_30 = fStack_38 + fVar29 * fVar21;
          fStack_2c = fStack_44 + fVar29 * fVar25;
          fStack_28 = fStack_40 + fVar29 * fVar21;
          fStack_24 = fStack_44 + fVar29 * fVar25;
          if (bVar5) {
            iVar18 = iVar17 * 0x10 + param_4;
            iVar16 = iVar16 + iVar11;
            FUN_1018ba42(&fStack_40,&fStack_38,&fStack_30,&fStack_28,*(undefined4 *)(iVar18 + 8));
            FUN_1018ba42(&fStack_40,&fStack_38,&fStack_30,&fStack_28,*(undefined4 *)(iVar18 + 0xc));
            fVar19 = (float10)FUN_100fdbca(fStack_1e4,fStack_28);
            fStack_1e4 = (float)fVar19;
            uVar12 = FUN_10165174(iVar2,iVar10);
            uVar13 = FUN_100fd57d(uVar12,0);
            fVar23 = *(float *)(iVar6 + 0x1228);
            iVar10 = FUN_100fabd9(uVar12,uVar13);
            FUN_100fdbca((fVar22 + fVar22 + (*(float *)(iVar16 + 0xc) - *(float *)(iVar16 + 8))) -
                         (float)iVar10 * (fVar23 / fVar27),0);
            fVar23 = *(float *)(iVar16 + 0x38);
            fVar19 = (float10)FUN_1026d3b0();
            fVar23 = fVar23 + (float)fVar19;
            *(float *)(iVar16 + 0x50) = fVar23;
            *(float *)(iVar16 + 0x4c) = fVar23;
            if (uVar12 < uVar13) {
              do {
                uVar14 = FUN_1025b9b0(uVar12);
                if (uVar14 == 0) {
                  uVar14 = uVar13;
                }
                FUN_100fdb2e(&fStack_58,uVar12,uVar14,0);
                fVar19 = (float10)FUN_100ea38a(fStack_54);
                uStack_68 = *(undefined4 *)(iVar3 + 0x28c);
                uStack_64 = *(undefined4 *)(iVar3 + 0x290);
                uStack_60 = CONCAT44((float)fVar19 +
                                     (float)((ulonglong)*(undefined8 *)(iVar3 + 0x28c) >> 0x20),
                                     param_3 + (float)*(undefined8 *)(iVar3 + 0x28c));
                uVar15 = *(undefined4 *)(iVar4 + 0x28);
                FUN_100fcc65(0);
                FUN_100fdc57(iVar4,&uStack_68,&uStack_60,(undefined4)uStack_60,uVar12,uVar14);
                FUN_100fce8e();
                uVar9 = *(undefined4 *)(iVar4 + 0x28);
                fVar19 = (float10)FUN_100fdbca(fVar30 + fVar30 +
                                               fVar28 + fVar28 + (param_3 - fStack_58));
                fStack_6c = *(float *)(iVar3 + 0x290) + fStack_54;
                fStack_70 = *(float *)(iVar3 + 0x28c) - (float)fVar19 * fVar1 * fVar26;
                if (param_2 < 0.0) {
                  FUN_100fdbca(0);
                }
                FUN_1018e237(iVar4,uVar15,uVar9,&fStack_70,fStack_1a4);
                uVar12 = uVar14 + 1;
              } while (uVar12 < uVar13);
              goto LAB_101677c1;
            }
          }
          else {
LAB_101677c1:
            if (bVar8) {
              uVar15 = FUN_101659d8();
              FUN_1018b2de(&fStack_40,&fStack_28,uVar15,0x3f800000);
            }
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 != param_5);
      }
      bVar8 = true;
      bVar7 = false;
    } while (bVar5);
    FUN_1010a588();
    FUN_1010a588();
    fVar19 = (float10)FUN_100fdbca(0,fStack_1e4 -
                                     *(float *)(*(int *)(iVar2 + 0x10) + 0xc +
                                               *(short *)(iVar2 + 0x1d4) * 0x74));
    *(float *)(*(int *)(iVar2 + 0xc) + 0xc) = (float)fVar19;
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

