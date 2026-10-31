/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a60fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400a60fb(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  lVar8 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (*(int *)(DAT_140f2a910 + 0x220c) == *(int *)(lVar2 + 0x1b0)) {
    uVar10 = *param_2;
    uVar5 = param_2[1];
    fVar16 = (float)*(undefined8 *)(DAT_140f2a910 + 0x22bc);
    fVar17 = (float)((ulonglong)*(undefined8 *)(DAT_140f2a910 + 0x22bc) >> 0x20);
    fVar18 = (float)*(undefined8 *)(DAT_140f2a910 + 0x22c4);
    fVar19 = (float)((ulonglong)*(undefined8 *)(DAT_140f2a910 + 0x22c4) >> 0x20);
    *(int *)(DAT_140f2a910 + 0x22dc) = *(int *)(DAT_140f2a910 + 0x22dc) + 1;
    local_b8 = uVar10;
    uStack_b0 = uVar5;
    if (*(longlong *)(lVar2 + 0x408) != *(longlong *)(lVar8 + 0x2200)) {
LAB_1400a61a3:
      uVar6 = DAT_1401c86dc;
      if (fVar16 <= (float)uStack_b0) {
        fVar15 = 0.0;
        if (fVar18 < (float)local_b8) {
          fVar15 = (float)local_b8 - fVar18;
        }
      }
      else {
        fVar15 = (float)uStack_b0 - fVar16;
      }
      fVar11 = (float)FUN_140048631(fVar17,fVar19,DAT_1401c86dc);
      uVar7 = DAT_14021001c;
      fVar12 = (float)FUN_140048631(fVar17,fVar19,DAT_14021001c);
      fVar13 = (float)FUN_140048631(local_b8._4_4_,uStack_b0._4_4_,uVar6);
      fVar14 = (float)FUN_140048631(local_b8._4_4_,uStack_b0._4_4_,uVar7);
      if (fVar12 <= fVar13) {
        if (fVar11 < fVar14) {
          fVar13 = fVar14 - fVar11;
          goto LAB_1400a6311;
        }
        fVar13 = 0.0;
        bVar4 = false;
      }
      else {
        fVar13 = fVar13 - fVar12;
LAB_1400a6311:
        bVar4 = fVar13 != 0.0;
        if (((fVar15 != 0.0) || (NAN(fVar15))) && ((fVar13 != 0.0 || (NAN(fVar13))))) {
          fVar15 = fVar15 / DAT_140211720 +
                   *(float *)(&DAT_140211850 + (ulonglong)(0.0 < fVar15) * 4);
          bVar4 = true;
        }
      }
      fVar16 = ((float)uStack_b0 + (float)local_b8) - (fVar16 + fVar18);
      fVar17 = ((float)((ulonglong)uStack_b0 >> 0x20) + (float)((ulonglong)local_b8 >> 0x20)) -
               (fVar17 + fVar19);
      fVar18 = (float)((uint)fVar15 & _DAT_1401ced40) + (float)((uint)fVar13 & _DAT_1401ced40);
      fVar19 = (float)((uint)fVar17 & _UNK_1401ced44) + (float)((uint)fVar16 & _UNK_1401ced44);
      if (bVar4) {
LAB_1400a63ce:
        uVar9 = FUN_1400a64f3(fVar15,fVar13);
        fVar11 = fVar18;
        fVar16 = fVar15;
        fVar17 = fVar13;
      }
      else {
        if ((fVar15 != 0.0) || (NAN(fVar15))) goto LAB_1400a63ce;
        if ((((fVar16 != 0.0) || (NAN(fVar16))) || (fVar17 != 0.0)) || (NAN(fVar17))) {
          uVar9 = FUN_1400a64f3(fVar16);
          fVar11 = fVar19;
        }
        else {
          uVar9 = (uint)(*(uint *)(lVar8 + 0x21f8) <= *(uint *)(lVar8 + 0x1fe0));
          fVar11 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
        }
      }
      uVar1 = *(uint *)(lVar8 + 0x22b0);
      fVar12 = *(float *)(param_1 + 0x24);
      if (uVar9 != uVar1) goto LAB_1400a6456;
      if (fVar12 <= fVar18) {
        if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
LAB_1400a6456:
          uVar10 = 0;
        }
        else {
          fVar18 = *(float *)(param_1 + 0x28);
          if (fVar18 <= fVar19) {
            if ((fVar19 == fVar18) && (!NAN(fVar19) && !NAN(fVar18))) {
              if (uVar9 < 2) {
                fVar13 = fVar15;
              }
              if (fVar13 < 0.0) goto LAB_1400a6452;
            }
            goto LAB_1400a6456;
          }
          *(float *)(param_1 + 0x28) = fVar19;
LAB_1400a6452:
          uVar10 = 1;
        }
        if (((((fVar12 != DAT_1402112e4) || (NAN(fVar12) || NAN(DAT_1402112e4))) ||
             (*(float *)(param_1 + 0x2c) <= fVar11)) ||
            ((*(int *)(lVar8 + 0x220c) != 1 ||
             ((*(byte *)(*(longlong *)(lVar8 + 0x2200) + 0x17) & 0x10) != 0)))) ||
           ((((uVar1 != 0 || (0.0 <= fVar16)) &&
             (((uVar1 != 1 || (fVar16 <= 0.0)) && ((uVar1 != 2 || (0.0 <= fVar17)))))) &&
            ((uVar1 != 3 || (fVar17 <= 0.0)))))) goto LAB_1400a620a;
        *(float *)(param_1 + 0x2c) = fVar11;
      }
      else {
        *(ulonglong *)(param_1 + 0x24) = CONCAT44(fVar19,fVar18);
      }
      uVar10 = 1;
      goto LAB_1400a620a;
    }
    local_b8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    bVar4 = local_b8._4_4_ < *(float *)(lVar2 + 0x2c4);
    if (((bVar4) &&
        (uStack_b0._4_4_ = (float)((ulonglong)uVar5 >> 0x20),
        bVar4 = uStack_b0._4_4_ != *(float *)(lVar2 + 700),
        bVar3 = *(float *)(lVar2 + 700) <= uStack_b0._4_4_, bVar3 && bVar4)) &&
       (local_b8._0_4_ = (float)uVar10, bVar4 = (float)local_b8 < *(float *)(lVar2 + 0x2c0), bVar4))
    {
      uStack_b0._0_4_ = (float)uVar5;
      bVar4 = (float)uStack_b0 != *(float *)(lVar2 + 0x2b8);
      bVar3 = *(float *)(lVar2 + 0x2b8) <= (float)uStack_b0;
      if (bVar3 && bVar4) {
        FUN_14008db02(&local_b8);
        goto LAB_1400a61a3;
      }
    }
  }
  uVar10 = 0;
LAB_1400a620a:
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_d8)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_d8);
}

