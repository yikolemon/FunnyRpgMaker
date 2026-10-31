/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d832 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1018d832(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20 [12];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  if (0xffffff < param_4 && 2 < (int)param_3) {
    local_54 = **(undefined4 **)(param_1 + 0x2c);
    local_4c = (*(undefined4 **)(param_1 + 0x2c))[1];
    local_28 = 0;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    if ((*(byte *)(param_1 + 0x24) & 4) == 0) {
      FUN_10188516(param_3 * 3 + -6,param_3);
      puVar11 = *(undefined8 **)(param_1 + 0x30);
      uVar9 = 0;
      do {
        *puVar11 = *(undefined8 *)(param_2 + uVar9 * 8);
        iVar14 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar14 + 0xc) = local_4c;
        *(undefined4 *)(iVar14 + 8) = local_54;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
        puVar11 = (undefined8 *)(*(int *)(param_1 + 0x30) + 0x14);
        *(undefined8 **)(param_1 + 0x30) = puVar11;
        uVar9 = uVar9 + 1;
      } while (param_3 != uVar9);
      iVar14 = *(int *)(param_1 + 0x2c);
      uVar9 = param_3 * 4 & 0x1ffffffc;
      if (*(int *)(iVar14 + 0x40) <= (int)uVar9) {
        iVar17 = uVar9 + 1;
        if (*(int *)(iVar14 + 0x44) != 0) {
          FUN_100fa2cb(*(int *)(iVar14 + 0x44));
        }
        uVar10 = FUN_100fa1fa(iVar17 * 8);
        *(undefined4 *)(iVar14 + 0x44) = uVar10;
        *(int *)(iVar14 + 0x40) = iVar17;
        iVar14 = *(int *)(param_1 + 0x2c);
      }
      FUN_1018d438(param_2,param_3,*(undefined4 *)(iVar14 + 0x44));
      if (0 < local_38) {
        do {
          FUN_1018d622(local_20);
          **(short **)(param_1 + 0x34) =
               (short)local_20._0_4_ + (short)*(undefined4 *)(param_1 + 0x28);
          *(short *)(*(int *)(param_1 + 0x34) + 2) =
               (short)local_20._4_4_ + (short)*(undefined4 *)(param_1 + 0x28);
          *(short *)(*(int *)(param_1 + 0x34) + 4) =
               (short)local_20._8_4_ + (short)*(undefined4 *)(param_1 + 0x28);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 6;
        } while (0 < local_38);
      }
      param_3 = param_3 & 0xffff;
    }
    else {
      local_50 = *(float *)(param_1 + 0xa8);
      local_44 = param_3 * 2;
      FUN_10188516(param_3 * 9 + -6,local_44);
      iVar14 = *(int *)(param_1 + 0x28);
      uVar9 = *(uint *)(param_1 + 0x2c);
      uVar15 = param_3 * 4 & 0x1ffffffc;
      if (*(int *)(uVar9 + 0x40) <= (int)uVar15) {
        iVar17 = uVar15 + 1;
        local_58 = uVar9;
        if (*(int *)(uVar9 + 0x44) != 0) {
          FUN_100fa2cb(*(int *)(uVar9 + 0x44));
        }
        uVar10 = FUN_100fa1fa(iVar17 * 8);
        *(undefined4 *)(local_58 + 0x44) = uVar10;
        *(int *)(local_58 + 0x40) = iVar17;
        uVar9 = *(uint *)(param_1 + 0x2c);
      }
      FUN_1018d438(param_2,param_3,*(undefined4 *)(uVar9 + 0x44));
      sVar4 = (short)iVar14;
      if (0 < local_38) {
        do {
          FUN_1018d622(local_20);
          **(short **)(param_1 + 0x34) = sVar4 + (short)local_20._0_4_ * 2;
          *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar4 + (short)local_20._4_4_ * 2;
          *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar4 + (short)local_20._8_4_ * 2;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 6;
        } while (0 < local_38);
      }
      iVar17 = *(int *)(param_1 + 0x2c);
      if (*(int *)(iVar17 + 0x40) < (int)param_3) {
        if (*(int *)(iVar17 + 0x44) != 0) {
          FUN_100fa2cb(*(int *)(iVar17 + 0x44));
        }
        uVar10 = FUN_100fa1fa(param_3 * 8);
        *(undefined4 *)(iVar17 + 0x44) = uVar10;
        *(uint *)(iVar17 + 0x40) = param_3;
        iVar17 = *(int *)(param_1 + 0x2c);
      }
      uVar9 = _DAT_1028f620;
      local_3c = param_4 & 0xffffff;
      local_40 = iVar14 + 1;
      local_48 = *(int *)(iVar17 + 0x44);
      uVar15 = 0;
      uVar16 = param_3 - 1;
      do {
        uVar12 = uVar15;
        uVar1 = *(undefined8 *)(param_2 + uVar12 * 8);
        uVar2 = *(undefined8 *)(param_2 + uVar16 * 8);
        fVar18 = (float)uVar1 - (float)uVar2;
        fVar19 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
        auVar20._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
        auVar20._4_4_ = fVar19;
        auVar20._8_8_ = 0;
        if (0.0 < auVar20._0_4_) {
          auVar20 = rsqrtss(auVar20,auVar20);
          fVar18 = fVar18 * auVar20._0_4_;
          fVar19 = fVar19 * auVar20._0_4_;
        }
        *(float *)(local_48 + uVar16 * 8) = fVar19;
        *(uint *)(local_48 + 4 + uVar16 * 8) = (uint)fVar18 ^ uVar9;
        fVar7 = DAT_102b9528;
        fVar6 = DAT_102b8c10;
        fVar5 = DAT_102b89c0._4_4_;
        fVar19 = (float)DAT_102b89c0;
        fVar18 = DAT_1028b430;
        uVar15 = uVar12 + 1;
        uVar16 = uVar12;
      } while (param_3 != uVar12 + 1);
      local_50 = local_50 * DAT_102b70e0;
      uVar9 = 0;
      iVar17 = iVar14;
      uVar15 = param_3 - 1;
      do {
        local_58 = uVar15;
        uVar15 = uVar9;
        uVar1 = *(undefined8 *)(local_48 + local_58 * 8);
        uVar2 = *(undefined8 *)(local_48 + uVar15 * 8);
        fVar21 = ((float)uVar2 + (float)uVar1) * fVar19;
        fVar22 = ((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20)) * fVar5;
        fVar23 = fVar21 * fVar21 + fVar22 * fVar22;
        if (fVar7 < fVar23) {
          fVar23 = fVar18 / fVar23;
          fVar24 = fVar6;
          if (fVar23 <= fVar6) {
            fVar24 = fVar23;
          }
          fVar21 = fVar21 * fVar24;
          fVar22 = fVar22 * fVar24;
        }
        fVar21 = local_50 * fVar21;
        fVar22 = fVar22 * local_50;
        **(float **)(param_1 + 0x30) = *(float *)(param_2 + uVar15 * 8) - fVar21;
        *(float *)(*(int *)(param_1 + 0x30) + 4) = *(float *)(param_2 + 4 + uVar15 * 8) - fVar22;
        iVar3 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar3 + 0xc) = local_4c;
        *(undefined4 *)(iVar3 + 8) = local_54;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
        *(float *)(*(int *)(param_1 + 0x30) + 0x14) = fVar21 + *(float *)(param_2 + uVar15 * 8);
        *(float *)(*(int *)(param_1 + 0x30) + 0x18) = fVar22 + *(float *)(param_2 + 4 + uVar15 * 8);
        iVar3 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar3 + 0x20) = local_4c;
        *(undefined4 *)(iVar3 + 0x1c) = local_54;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = local_3c;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x28;
        sVar13 = (short)iVar17;
        **(short **)(param_1 + 0x34) = sVar13;
        *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar4 + (short)local_58 * 2;
        sVar8 = (short)local_40 + (short)local_58 * 2;
        *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar8;
        *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar8;
        *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar13 + 1;
        *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar13;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc;
        iVar17 = iVar17 + 2;
        uVar9 = uVar15 + 1;
      } while (param_3 != uVar15 + 1);
      param_3 = local_44 & 0xfffe;
      local_50 = (float)iVar14;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

