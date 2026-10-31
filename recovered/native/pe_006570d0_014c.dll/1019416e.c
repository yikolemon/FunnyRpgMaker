/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019416e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019416e(int param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                 float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_94;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_94;
  if (param_4 <= param_5) {
    local_18 = param_2[1];
    local_1c = param_4;
    local_20 = param_2[3];
    local_24 = param_5;
    if ((param_6 != 0.0) || (NAN(param_6))) {
      local_94 = (double)CONCAT44((local_20 - local_18) * DAT_102b70e0,
                                  (param_2[2] - *param_2) * DAT_102b70e0);
      local_7c = local_20;
      local_78 = local_18;
      fVar4 = (float10)FUN_100ea38a();
      local_50 = (float)fVar4;
      local_8c = param_6;
      local_94 = (double)(ulonglong)(uint)(local_50 + DAT_102b8a50);
      fVar4 = (float10)FUN_10112cc4();
      local_80 = (float)fVar4;
      local_4c = DAT_1028b430 / local_80;
      local_94._4_4_ = *param_2;
      fVar5 = DAT_1028b430 - (param_4 - local_94._4_4_) * local_4c;
      local_3c = DAT_10301494;
      local_54 = local_80;
      if ((0.0 < fVar5) && (local_3c = 0.0, fVar5 < DAT_1028b430)) {
        local_94 = (double)fVar5;
        fVar4 = (float10)FUN_1026cb00();
        local_58 = (float)fVar4;
        local_94._4_4_ = *param_2;
        local_3c = local_58;
      }
      fVar5 = DAT_1028b430 - (param_5 - local_94._4_4_) * local_4c;
      local_74 = DAT_10301494;
      if ((0.0 < fVar5) && (local_74 = 0.0, fVar5 < DAT_1028b430)) {
        local_94 = (double)fVar5;
        fVar4 = (float10)FUN_1026cb00();
        local_5c = (float)fVar4;
        local_94._4_4_ = *param_2;
        local_74 = local_5c;
      }
      local_94._4_4_ = local_94._4_4_ + local_80;
      local_94._0_4_ = param_4;
      fVar4 = (float10)FUN_100fdbca();
      local_70 = (float)fVar4;
      local_60 = local_70;
      if ((local_3c != local_74) || (NAN(local_3c) || NAN(local_74))) {
        local_2c = local_70;
        if ((local_3c != 0.0) ||
           (((NAN(local_3c) || (local_74 != DAT_10301494)) || (NAN(local_74) || NAN(DAT_10301494))))
           ) {
          local_88 = DAT_102b9604 - local_3c;
          local_28 = local_7c - local_80;
          local_8c = DAT_102b9604 - local_74;
          local_84 = 0;
          local_94 = (double)CONCAT44(local_80,&local_2c);
          FUN_10189cf2();
          local_88 = local_74 + DAT_102b9604;
          local_8c = local_3c + DAT_102b9604;
          local_28 = local_78 + local_80;
          local_2c = local_70;
          local_84 = 0;
          local_94 = (double)CONCAT44(local_80,&local_2c);
          FUN_10189cf2();
          fVar5 = DAT_1028b430;
        }
        else {
          local_28 = local_7c - local_80;
          local_88 = 8.40779e-45;
          local_94 = (double)CONCAT44(local_80,&local_2c);
          local_8c = 4.2039e-45;
          FUN_10189c26();
          local_28 = local_78 + local_80;
          local_2c = local_70;
          local_8c = 8.40779e-45;
          local_94 = (double)CONCAT44(local_80,&local_2c);
          local_88 = 1.26117e-44;
          FUN_10189c26();
          fVar5 = DAT_1028b430;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38);
        if (iVar3 == *(int *)(param_1 + 0x3c)) {
          if (iVar3 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar3 / 2 + iVar3;
          }
          iVar1 = iVar3 + 1;
          if (iVar3 + 1 < iVar2) {
            iVar1 = iVar2;
          }
          local_94._0_4_ = (float)(iVar1 * 8);
          iVar2 = FUN_100fa1fa();
          if (*(float *)(param_1 + 0x40) != 0.0) {
            local_8c = (float)(*(int *)(param_1 + 0x38) << 3);
            local_94._0_4_ = (float)iVar2;
            local_94._4_4_ = *(float *)(param_1 + 0x40);
            FUN_1025b2d0();
            local_94._0_4_ = *(float *)(param_1 + 0x40);
            FUN_100fa2cb();
          }
          *(int *)(param_1 + 0x40) = iVar2;
          *(int *)(param_1 + 0x3c) = iVar1;
          iVar3 = *(int *)(param_1 + 0x38);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x40);
        }
        fVar5 = DAT_1028b430;
        *(float *)(iVar2 + iVar3 * 8) = local_70;
        *(float *)(iVar2 + 4 + iVar3 * 8) = local_7c;
        iVar2 = *(int *)(param_1 + 0x38);
        iVar3 = iVar2 + 1;
        *(int *)(param_1 + 0x38) = iVar3;
        if (iVar3 == *(int *)(param_1 + 0x3c)) {
          iVar2 = iVar2 + 2;
          if (iVar3 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar3 / 2 + iVar3;
          }
          if (iVar2 < iVar3) {
            iVar2 = iVar3;
          }
          local_94 = (double)CONCAT44(local_94._4_4_,iVar2 * 8);
          iVar1 = FUN_100fa1fa();
          local_94._4_4_ = *(float *)(param_1 + 0x40);
          if (local_94._4_4_ != 0.0) {
            local_8c = (float)(*(int *)(param_1 + 0x38) << 3);
            local_94._0_4_ = (float)iVar1;
            FUN_1025b2d0();
            local_94 = (double)CONCAT44(local_94._4_4_,*(undefined4 *)(param_1 + 0x40));
            FUN_100fa2cb();
          }
          *(int *)(param_1 + 0x40) = iVar1;
          *(int *)(param_1 + 0x3c) = iVar2;
          iVar3 = *(int *)(param_1 + 0x38);
          fVar5 = DAT_1028b430;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x40);
        }
        *(float *)(iVar1 + iVar3 * 8) = local_70;
        *(float *)(iVar1 + 4 + iVar3 * 8) = local_78;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      }
      if (*param_2 + local_80 < param_5) {
        local_94._4_4_ = param_2[2];
        fVar6 = fVar5 - (local_94._4_4_ - param_5) * local_4c;
        fVar7 = DAT_10301494;
        if ((0.0 < fVar6) && (fVar7 = 0.0, fVar6 < DAT_1028b430)) {
          local_94 = (double)fVar6;
          fVar4 = (float10)FUN_1026cb00();
          local_64 = (float)fVar4;
          local_94._4_4_ = param_2[2];
          fVar5 = DAT_1028b430;
          fVar7 = local_64;
        }
        fVar5 = fVar5 - (local_94._4_4_ - param_4) * local_4c;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        fVar6 = DAT_10301494;
        local_3c = fVar7;
        if ((0.0 < fVar5) && (fVar6 = 0.0, fVar5 < DAT_1028b430)) {
          local_94 = (double)fVar5;
          fVar4 = (float10)FUN_1026cb00();
          fVar6 = (float)fVar4;
          local_94._4_4_ = param_2[2];
          local_68 = fVar6;
        }
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        local_94._4_4_ = local_94._4_4_ - local_80;
        local_94._0_4_ = param_5;
        local_4c = fVar6;
        fVar4 = (float10)FUN_100ea38a();
        local_74 = (float)fVar4;
        local_6c = local_74;
        if ((local_3c != local_4c) || (NAN(local_3c) || NAN(local_4c))) {
          local_2c = local_74;
          if ((local_3c != 0.0) ||
             (((NAN(local_3c) || (local_4c != DAT_10301494)) || (NAN(local_4c) || NAN(DAT_10301494))
              ))) {
            local_88 = (float)((uint)local_3c ^ _DAT_1028f620);
            local_8c = (float)(_DAT_1028f620 ^ (uint)local_4c);
            local_28 = local_78 + local_80;
            local_84 = 0;
            local_94 = (double)CONCAT44(local_80,&local_2c);
            FUN_10189cf2();
            local_28 = local_7c - local_80;
            local_2c = local_74;
            local_84 = 0;
            local_88 = local_4c;
            local_8c = local_3c;
            local_94 = (double)CONCAT44(local_80,&local_2c);
            FUN_10189cf2();
          }
          else {
            local_28 = local_78 + local_80;
            local_94 = (double)CONCAT44(local_80,&local_2c);
            local_88 = 1.68156e-44;
            local_8c = 1.26117e-44;
            FUN_10189c26();
            local_28 = local_7c - local_80;
            local_2c = local_74;
            local_94 = (double)CONCAT44(local_80,&local_2c);
            local_88 = 4.2039e-45;
            local_8c = 0.0;
            FUN_10189c26();
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x38);
          if (iVar3 == *(int *)(param_1 + 0x3c)) {
            if (iVar3 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar3 / 2 + iVar3;
            }
            iVar1 = iVar3 + 1;
            if (iVar3 + 1 < iVar2) {
              iVar1 = iVar2;
            }
            local_94._0_4_ = (float)(iVar1 * 8);
            iVar2 = FUN_100fa1fa();
            if (*(float *)(param_1 + 0x40) != 0.0) {
              local_8c = (float)(*(int *)(param_1 + 0x38) << 3);
              local_94._0_4_ = (float)iVar2;
              local_94._4_4_ = *(float *)(param_1 + 0x40);
              FUN_1025b2d0();
              local_94._0_4_ = *(float *)(param_1 + 0x40);
              FUN_100fa2cb();
            }
            *(int *)(param_1 + 0x40) = iVar2;
            *(int *)(param_1 + 0x3c) = iVar1;
            iVar3 = *(int *)(param_1 + 0x38);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x40);
          }
          *(float *)(iVar2 + iVar3 * 8) = local_74;
          *(float *)(iVar2 + 4 + iVar3 * 8) = local_78;
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = iVar2 + 1;
          *(int *)(param_1 + 0x38) = iVar3;
          if (iVar3 == *(int *)(param_1 + 0x3c)) {
            iVar2 = iVar2 + 2;
            if (iVar3 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar3 / 2 + iVar3;
            }
            if (iVar2 < iVar3) {
              iVar2 = iVar3;
            }
            local_94 = (double)CONCAT44(local_94._4_4_,iVar2 * 8);
            iVar1 = FUN_100fa1fa();
            local_94._4_4_ = *(float *)(param_1 + 0x40);
            if (local_94._4_4_ != 0.0) {
              local_8c = (float)(*(int *)(param_1 + 0x38) << 3);
              local_94._0_4_ = (float)iVar1;
              FUN_1025b2d0();
              local_94 = (double)CONCAT44(local_94._4_4_,*(undefined4 *)(param_1 + 0x40));
              FUN_100fa2cb();
            }
            *(int *)(param_1 + 0x40) = iVar1;
            *(int *)(param_1 + 0x3c) = iVar2;
            iVar3 = *(int *)(param_1 + 0x38);
          }
          else {
            iVar1 = *(int *)(param_1 + 0x40);
          }
          *(float *)(iVar1 + iVar3 * 8) = local_74;
          *(float *)(iVar1 + 4 + iVar3 * 8) = local_7c;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        }
      }
      local_8c = (float)param_3;
      local_94 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
      FUN_10189368();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      local_84 = 0;
      local_88 = 0.0;
      local_8c = (float)param_3;
      local_94 = (double)CONCAT44(&local_24,&local_1c);
      FUN_1018b85a();
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_94)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

