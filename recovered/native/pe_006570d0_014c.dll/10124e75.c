/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124e75 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124e75(int param_1,int param_2,float *param_3,char param_4,char param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 *local_98;
  undefined8 *local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  uint local_7c;
  float local_78;
  undefined1 local_74 [8];
  float fStack_6c;
  float fStack_68;
  undefined1 local_64 [8];
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_98;
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar9 = param_3[2];
  fVar11 = param_3[3];
  uVar7 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x24) = uVar7 & 0xfffffffe;
  local_80 = param_3[9];
  local_78 = (float)((int)param_3[10] + (int)local_80);
  if ((uint)local_80 < (uint)local_78) {
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    auVar21 = _DAT_102b8950;
    _local_74 = _DAT_102b8d20;
    local_7c = uVar7;
    local_54 = fVar9;
    fStack_50 = fVar11;
    local_44 = fVar15;
    fStack_40 = fVar17;
    do {
      iVar6 = 0;
      iVar4 = 0;
      if (0 < *(int *)(param_2 + 0xc)) {
        iVar4 = *(int *)(param_2 + 0x14);
      }
      iVar5 = (int)param_3[8] * 0x14 + *(int *)(param_2 + 0x20);
      local_1c = 0;
      local_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uVar8 = local_74._0_4_;
      uVar10 = local_74._4_4_;
      uVar12 = local_74._8_4_;
      uVar13 = local_74._12_4_;
      uVar14 = auVar21._0_4_;
      uVar16 = auVar21._4_4_;
      uVar18 = auVar21._8_4_;
      uVar19 = auVar21._12_4_;
      do {
        if (iVar4 == 0) {
          uVar7 = (int)local_80 + iVar6;
        }
        else {
          uVar7 = (uint)*(ushort *)(iVar4 + (int)local_80 * 2 + iVar6 * 2);
        }
        uVar2 = *(undefined4 *)(iVar5 + 4 + uVar7 * 0x14);
        uVar1 = *(ulonglong *)(iVar5 + uVar7 * 0x14);
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar1;
        *(undefined4 *)(&local_2c + iVar6) = *(undefined4 *)(iVar5 + uVar7 * 0x14);
        *(undefined4 *)((int)&local_2c + iVar6 * 8 + 4) = uVar2;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar1;
        auVar3._4_4_ = uVar16;
        auVar3._0_4_ = uVar14;
        auVar3._8_4_ = uVar18;
        auVar3._12_4_ = uVar19;
        _local_64 = minps(auVar20,auVar3);
        auVar21._4_4_ = uVar10;
        auVar21._0_4_ = uVar8;
        auVar21._8_4_ = uVar12;
        auVar21._12_4_ = uVar13;
        _local_74 = maxps(auVar22,auVar21);
        iVar6 = iVar6 + 1;
        uVar8 = local_74._0_4_;
        uVar10 = local_74._4_4_;
        uVar12 = local_74._8_4_;
        uVar13 = local_74._12_4_;
        uVar14 = local_64._0_4_;
        uVar16 = local_64._4_4_;
        uVar18 = local_64._8_4_;
        uVar19 = local_64._12_4_;
      } while (iVar6 != 3);
      auVar21 = _local_64;
      if (param_4 != '\0') {
        local_94 = _DAT_102b8fb0;
        uStack_90 = _UNK_102b8fb4;
        uStack_8c = _UNK_102b8fb8;
        uStack_88 = _UNK_102b8fbc;
        local_98 = &local_2c;
        FUN_101888a4();
        auVar21 = _local_64;
      }
      local_80 = (float)((int)local_80 + 3);
    } while ((uint)local_80 < (uint)local_78);
    local_64._4_4_ = (float)(int)local_74._4_4_;
    local_64._0_4_ = (float)(int)local_74._0_4_;
    fStack_5c = (float)(int)local_74._8_4_;
    fStack_58 = (float)(int)local_74._12_4_;
    local_74._4_4_ = (float)(int)auVar21._4_4_;
    local_74._0_4_ = (float)(int)auVar21._0_4_;
    fStack_6c = (float)(int)auVar21._8_4_;
    fStack_68 = (float)(int)auVar21._12_4_;
    uVar7 = local_7c;
    fVar9 = local_54;
    fVar11 = fStack_50;
    fVar15 = local_44;
    fVar17 = fStack_40;
  }
  if (param_5 != '\0') {
    local_2c = CONCAT44((float)(int)fVar11,(float)(int)fVar9);
    local_34 = CONCAT44((float)(int)fVar17,(float)(int)fVar15);
    uStack_90 = _DAT_102b8dc0;
    uStack_8c = _UNK_102b8dc4;
    uStack_88 = _UNK_102b8dc8;
    uStack_84 = _UNK_102b8dcc;
    local_98 = &local_34;
    local_94 = &local_2c;
    FUN_1018b762();
    local_2c = local_64;
    local_34 = local_74;
    uStack_90 = _DAT_102b90a0;
    uStack_8c = _UNK_102b90a4;
    uStack_88 = _UNK_102b90a8;
    uStack_84 = _UNK_102b90ac;
    local_98 = &local_34;
    local_94 = &local_2c;
    FUN_1018b762();
  }
  *(uint *)(param_1 + 0x24) = uVar7;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

