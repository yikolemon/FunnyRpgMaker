/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e0458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e0458(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  short sVar14;
  longlong lVar15;
  short sVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_d8 [36];
  uint local_b4;
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_7c [12];
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  if (0xffffff < param_4 && 2 < (int)param_3) {
    uVar13 = (ulonglong)param_3;
    uVar7 = **(undefined8 **)(param_1 + 0x38);
    local_b0[0] = 0;
    local_90 = 0;
    local_88 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      FUN_1400dae70(param_1,param_3 * 3 + -6,uVar13);
      puVar10 = *(undefined8 **)(param_1 + 0x40);
      uVar9 = 0;
      do {
        *puVar10 = *(undefined8 *)(param_2 + uVar9 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar7;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14);
        *(undefined8 **)(param_1 + 0x40) = puVar10;
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
      lVar18 = *(longlong *)(param_1 + 0x38);
      iVar11 = (int)(param_3 * 0x30) >> 3;
      if (*(int *)(lVar18 + 0x4c) <= iVar11) {
        iVar11 = iVar11 + 1;
        if (*(longlong *)(lVar18 + 0x50) != 0) {
          FUN_140077b90();
        }
        uVar7 = FUN_140077ab4((longlong)iVar11 * 8);
        *(undefined8 *)(lVar18 + 0x50) = uVar7;
        *(int *)(lVar18 + 0x4c) = iVar11;
        lVar18 = *(longlong *)(param_1 + 0x38);
      }
      FUN_1400dff9c(local_b0,param_2,uVar13,*(undefined8 *)(lVar18 + 0x50));
      if (0 < local_b0[0]) {
        do {
          FUN_1400e0200(local_b0,local_7c);
          **(short **)(param_1 + 0x48) =
               (short)local_7c._0_4_ + (short)*(undefined4 *)(param_1 + 0x34);
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) =
               (short)local_7c._4_4_ + (short)*(undefined4 *)(param_1 + 0x34);
          *(short *)(*(longlong *)(param_1 + 0x48) + 4) =
               (short)local_7c._8_4_ + (short)*(undefined4 *)(param_1 + 0x34);
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        } while (0 < local_b0[0]);
      }
      param_3 = param_3 & 0xffff;
    }
    else {
      fVar26 = *(float *)(param_1 + 0xd0);
      local_b4 = param_3 * 2;
      FUN_1400dae70(param_1,param_3 * 9 + -6);
      iVar11 = *(int *)(param_1 + 0x34);
      lVar18 = *(longlong *)(param_1 + 0x38);
      iVar17 = (int)(param_3 * 0x30) >> 3;
      if (*(int *)(lVar18 + 0x4c) <= iVar17) {
        iVar17 = iVar17 + 1;
        if (*(longlong *)(lVar18 + 0x50) != 0) {
          FUN_140077b90();
        }
        uVar8 = FUN_140077ab4((longlong)iVar17 * 8);
        *(undefined8 *)(lVar18 + 0x50) = uVar8;
        *(int *)(lVar18 + 0x4c) = iVar17;
        lVar18 = *(longlong *)(param_1 + 0x38);
      }
      FUN_1400dff9c(local_b0,param_2,uVar13,*(undefined8 *)(lVar18 + 0x50));
      sVar2 = (short)iVar11;
      if (0 < local_b0[0]) {
        do {
          FUN_1400e0200(local_b0,local_7c);
          **(short **)(param_1 + 0x48) = sVar2 + (short)local_7c._0_4_ * 2;
          *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar2 + (short)local_7c._4_4_ * 2;
          *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar2 + (short)local_7c._8_4_ * 2;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        } while (0 < local_b0[0]);
      }
      lVar18 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar18 + 0x4c) < (int)param_3) {
        if (*(longlong *)(lVar18 + 0x50) != 0) {
          FUN_140077b90();
        }
        uVar8 = FUN_140077ab4(uVar13 * 8);
        *(undefined8 *)(lVar18 + 0x50) = uVar8;
        *(uint *)(lVar18 + 0x4c) = param_3;
        lVar18 = *(longlong *)(param_1 + 0x38);
      }
      uVar3 = _DAT_1401c8590;
      lVar18 = *(longlong *)(lVar18 + 0x50);
      iVar12 = param_3 - 1;
      uVar9 = 0;
      iVar17 = iVar12;
      do {
        lVar15 = (longlong)iVar17;
        uVar8 = *(undefined8 *)(param_2 + uVar9 * 8);
        uVar1 = *(undefined8 *)(param_2 + lVar15 * 8);
        fVar19 = (float)uVar8 - (float)uVar1;
        fVar20 = (float)((ulonglong)uVar8 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
        auVar21._0_4_ = fVar19 * fVar19 + fVar20 * fVar20;
        auVar21._4_4_ = fVar20;
        auVar21._8_8_ = 0;
        if (0.0 < auVar21._0_4_) {
          auVar21 = rsqrtss(auVar21,auVar21);
          fVar19 = fVar19 * auVar21._0_4_;
          fVar20 = fVar20 * auVar21._0_4_;
        }
        *(float *)(lVar18 + lVar15 * 8) = fVar20;
        *(uint *)(lVar18 + 4 + lVar15 * 8) = (uint)fVar19 ^ uVar3;
        fVar6 = DAT_140211de0;
        fVar5 = DAT_1402114b0;
        fVar4 = DAT_1401c86c8;
        fVar20 = DAT_1401c8640._4_4_;
        fVar19 = (float)DAT_1401c8640;
        iVar17 = (int)uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
      fVar26 = fVar26 * DAT_1401c86a0;
      uVar9 = 0;
      do {
        uVar8 = *(undefined8 *)(lVar18 + (longlong)iVar12 * 8);
        uVar1 = *(undefined8 *)(lVar18 + uVar9 * 8);
        fVar22 = ((float)uVar1 + (float)uVar8) * fVar19;
        fVar23 = ((float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)) * fVar20;
        fVar24 = fVar22 * fVar22 + fVar23 * fVar23;
        if (fVar6 < fVar24) {
          fVar24 = fVar4 / fVar24;
          fVar25 = fVar5;
          if (fVar24 <= fVar5) {
            fVar25 = fVar24;
          }
          fVar22 = fVar22 * fVar25;
          fVar23 = fVar23 * fVar25;
        }
        fVar22 = fVar26 * fVar22;
        fVar23 = fVar23 * fVar26;
        **(float **)(param_1 + 0x40) = *(float *)(param_2 + uVar9 * 8) - fVar22;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) = *(float *)(param_2 + 4 + uVar9 * 8) - fVar23
        ;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar7;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar22 + *(float *)(param_2 + uVar9 * 8);
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
             fVar23 + *(float *)(param_2 + 4 + uVar9 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar7;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4 & 0xffffff;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        sVar14 = (short)iVar11;
        **(short **)(param_1 + 0x48) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar2 + (short)iVar12 * 2;
        sVar16 = sVar2 + 1 + (short)iVar12 * 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar16;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar16;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar14 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar14;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        iVar12 = (int)uVar9;
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 2;
      } while (uVar13 != uVar9);
      param_3 = local_b4 & 0xfffe;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_d8);
}

