/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152e5b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10152e5b(undefined4 param_1,int param_2,uint param_3,uint param_4,float param_5,
                    float param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_74;
  uint local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  uVar2 = param_4;
  uVar1 = param_3;
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  local_58 = 0.0;
  iVar5 = param_4 - param_3;
  if (iVar5 != 0) {
    if ((int)param_4 < (int)param_3) {
      local_6c = param_3;
      local_74._4_4_ = param_4;
    }
    else {
      local_6c = param_4;
      local_74._4_4_ = param_3;
    }
    local_74 = (double)CONCAT44(local_74._4_4_,param_2);
    iVar3 = FUN_10125d9a();
    if (param_5 <= 0.0) {
      local_58 = (float)(int)(iVar3 - uVar1) / (float)iVar5;
    }
    else {
      uVar4 = uVar1;
      if ((int)uVar2 < (int)uVar1) {
        local_74 = (double)CONCAT44(&param_4,&param_3);
        FUN_101412d9();
        uVar4 = param_3;
      }
      fVar7 = (float)(int)uVar4;
      fVar10 = fVar7;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      if ((float)(_DAT_1028b410 & (uint)fVar7) < param_5) {
        if ((int)uVar4 < 0) {
          fVar10 = (float)(_DAT_1028f620 ^ (uint)param_5);
          uVar11 = _UNK_1028f624;
          uVar12 = _UNK_1028f628;
          uVar13 = _UNK_1028f62c;
        }
        else {
          fVar10 = param_5;
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0;
        }
      }
      fVar8 = (float)(int)param_4;
      fVar14 = fVar8;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      if ((float)(_DAT_1028b410 & (uint)fVar8) < param_5) {
        if ((int)param_4 < 0) {
          fVar14 = (float)(_DAT_1028f620 ^ (uint)param_5);
          uVar15 = _UNK_1028f624;
          uVar16 = _UNK_1028f628;
          uVar17 = _UNK_1028f62c;
        }
        else {
          fVar14 = param_5;
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
        }
      }
      if ((int)param_4 < 0 && uVar4 == 0) {
        fVar10 = (float)(_DAT_1028f620 ^ (uint)param_5);
        uVar11 = _UNK_1028f624;
        uVar12 = _UNK_1028f628;
        uVar13 = _UNK_1028f62c;
      }
      else if ((int)uVar4 < 0 && param_4 == 0) {
        fVar14 = (float)(_DAT_1028f620 ^ (uint)param_5);
        uVar15 = _UNK_1028f624;
        uVar16 = _UNK_1028f628;
        uVar17 = _UNK_1028f62c;
      }
      fVar9 = (float)iVar3;
      local_58 = 0.0;
      if ((fVar10 < fVar9) && (local_58 = DAT_1028b430, fVar9 < fVar14)) {
        if ((int)(param_4 * uVar4) < 0) {
          local_58 = (float)((uint)fVar7 ^ _DAT_1028f620) / (fVar8 - fVar7);
          if (param_2 != 0) {
            if (param_2 < 0) {
              local_68 = local_58 - param_6;
              uStack_64 = _UNK_1028f624;
              uStack_60 = _UNK_1028f628;
              uStack_5c = _UNK_1028f62c;
              local_74 = (double)((float)((uint)fVar9 ^ _DAT_1028f620) / param_5);
              local_34 = fVar10;
              uStack_30 = uVar11;
              uStack_2c = uVar12;
              uStack_28 = uVar13;
              fVar6 = (float10)FUN_1026fa50();
              local_50 = (float)fVar6;
              local_74 = (double)((float)((uint)local_34 ^ _DAT_1028f620) / param_5);
              local_24 = local_50;
              fVar6 = (float10)FUN_1026fa50();
              local_54 = (float)fVar6;
              local_58 = local_68 * (DAT_1028b430 - local_24 / local_54);
            }
            else {
              local_34 = param_6 + local_58;
              local_74 = (double)(fVar9 / param_5);
              local_24 = fVar14;
              uStack_20 = uVar15;
              uStack_1c = uVar16;
              uStack_18 = uVar17;
              fVar6 = (float10)FUN_1026fa50();
              local_68 = (float)fVar6;
              local_74 = (double)(local_24 / param_5);
              local_48 = local_68;
              fVar6 = (float10)FUN_1026fa50();
              local_4c = (float)fVar6;
              local_58 = (DAT_1028b430 - local_34) * (local_68 / local_4c) + local_34;
            }
          }
        }
        else if ((int)(param_4 | uVar4) < 0) {
          local_74 = (double)(fVar9 / fVar14);
          local_34 = fVar10;
          uStack_30 = uVar11;
          uStack_2c = uVar12;
          uStack_28 = uVar13;
          local_24 = fVar14;
          uStack_20 = uVar15;
          uStack_1c = uVar16;
          uStack_18 = uVar17;
          fVar6 = (float10)FUN_1026fa50();
          local_68 = (float)fVar6;
          local_74 = (double)(local_34 / local_24);
          local_38 = local_68;
          fVar6 = (float10)FUN_1026fa50();
          local_3c = (float)fVar6;
          local_58 = DAT_1028b430 - local_68 / local_3c;
        }
        else {
          local_74 = (double)(fVar9 / fVar10);
          local_34 = fVar10;
          uStack_30 = uVar11;
          uStack_2c = uVar12;
          uStack_28 = uVar13;
          local_24 = fVar14;
          uStack_20 = uVar15;
          uStack_1c = uVar16;
          uStack_18 = uVar17;
          fVar6 = (float10)FUN_1026fa50();
          local_68 = (float)fVar6;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_74 = (double)(local_24 / local_34);
          local_40 = local_68;
          fVar6 = (float10)FUN_1026fa50();
          local_44 = (float)fVar6;
          local_58 = local_68 / local_44;
        }
      }
      if ((int)uVar2 < (int)uVar1) {
        local_58 = DAT_1028b430 - local_58;
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)local_58;
}

