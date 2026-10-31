/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e743c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e743c(longlong param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                  float param_6)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_138 [32];
  float local_118;
  undefined4 local_110;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_140f17b40 ^ (ulonglong)auStack_138;
  if (param_4 <= param_5) {
    fVar1 = param_2[1];
    local_ec = param_2[3];
    local_f0 = param_5;
    local_e8 = param_4;
    local_e4 = fVar1;
    if ((param_6 != 0.0) || (NAN(param_6))) {
      local_fc = local_ec;
      fVar6 = (float)FUN_14004863e((param_2[2] - *param_2) * DAT_1401c86a0,
                                   (local_ec - fVar1) * DAT_1401c86a0);
      fVar7 = (float)FUN_140090d06(fVar6 + DAT_1401c86a4,0,param_6);
      fVar11 = DAT_140e8c804;
      fVar13 = DAT_1401c86c8;
      fVar14 = DAT_1401c86c8 / fVar7;
      fVar6 = *param_2;
      fVar8 = DAT_1401c86c8 - (param_4 - fVar6) * fVar14;
      fVar9 = DAT_140e8c804;
      if ((0.0 < fVar8) && (fVar9 = 0.0, fVar8 < DAT_1401c86c8)) {
        fVar9 = (float)FUN_1401a07b0();
        fVar6 = *param_2;
      }
      fVar8 = local_fc;
      fVar10 = fVar13 - (param_5 - fVar6) * fVar14;
      if ((0.0 < fVar10) && (fVar11 = 0.0, fVar10 < DAT_1401c86c8)) {
        fVar11 = (float)FUN_1401a07b0();
        fVar6 = *param_2;
      }
      uVar12 = FUN_14007b71f(param_4,fVar6 + fVar7);
      fVar6 = DAT_140211e84;
      if ((fVar9 != fVar11) || (NAN(fVar9) || NAN(fVar11))) {
        local_f8 = uVar12;
        if ((fVar9 != 0.0) ||
           (((NAN(fVar9) || (fVar11 != DAT_140e8c804)) || (NAN(fVar11) || NAN(DAT_140e8c804))))) {
          local_118 = DAT_140211e84 - fVar9;
          local_f4 = local_fc - fVar7;
          local_110 = 0;
          FUN_1400dc6f0(param_1,&local_f8,fVar7,DAT_140211e84 - fVar11);
          fVar8 = local_fc;
          local_118 = fVar11 + fVar6;
          local_f4 = fVar1 + fVar7;
          local_110 = 0;
          local_f8 = uVar12;
          FUN_1400dc6f0(param_1,&local_f8,fVar7,fVar9 + fVar6);
        }
        else {
          local_f4 = fVar8 - fVar7;
          local_118 = 8.40779e-45;
          FUN_1400dc632(param_1,&local_f8,fVar7,3);
          local_f4 = fVar1 + fVar7;
          local_118 = 1.26117e-44;
          local_f8 = uVar12;
          FUN_1400dc632(param_1,&local_f8,fVar7,6);
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x50);
        if (iVar4 == *(int *)(param_1 + 0x54)) {
          if (iVar4 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar4 / 2 + iVar4;
          }
          iVar5 = iVar4 + 1;
          if (iVar4 + 1 < iVar3) {
            iVar5 = iVar3;
          }
          lVar2 = FUN_140077ab4((longlong)iVar5 << 3);
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),
                          (longlong)*(int *)(param_1 + 0x50) << 3);
            FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
          }
          *(longlong *)(param_1 + 0x58) = lVar2;
          *(int *)(param_1 + 0x54) = iVar5;
          iVar4 = *(int *)(param_1 + 0x50);
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x58);
        }
        *(undefined4 *)(lVar2 + (longlong)iVar4 * 8) = uVar12;
        *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar8;
        iVar3 = *(int *)(param_1 + 0x50);
        iVar4 = iVar3 + 1;
        *(int *)(param_1 + 0x50) = iVar4;
        if (iVar4 == *(int *)(param_1 + 0x54)) {
          iVar3 = iVar3 + 2;
          if (iVar4 == 0) {
            iVar4 = 8;
          }
          else {
            iVar4 = iVar4 / 2 + iVar4;
          }
          if (iVar3 < iVar4) {
            iVar3 = iVar4;
          }
          lVar2 = FUN_140077ab4((longlong)iVar3 << 3);
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),
                          (longlong)*(int *)(param_1 + 0x50) << 3);
            FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
          }
          *(longlong *)(param_1 + 0x58) = lVar2;
          *(int *)(param_1 + 0x54) = iVar3;
          iVar4 = *(int *)(param_1 + 0x50);
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x58);
        }
        *(undefined4 *)(lVar2 + (longlong)iVar4 * 8) = uVar12;
        *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      fVar6 = DAT_140e8c804;
      if (*param_2 + fVar7 < param_5) {
        fVar11 = param_2[2];
        fVar10 = fVar13 - (fVar11 - param_5) * fVar14;
        fVar9 = DAT_140e8c804;
        if ((0.0 < fVar10) && (fVar9 = 0.0, fVar10 < DAT_1401c86c8)) {
          fVar9 = (float)FUN_1401a07b0();
          fVar11 = param_2[2];
        }
        fVar13 = fVar13 - (fVar11 - param_4) * fVar14;
        if ((0.0 < fVar13) && (fVar6 = 0.0, fVar13 < DAT_1401c86c8)) {
          fVar6 = (float)FUN_1401a07b0(fVar13);
          fVar11 = param_2[2];
        }
        uVar12 = FUN_14004863e(param_5,fVar11 - fVar7);
        if ((fVar9 != fVar6) || (NAN(fVar9) || NAN(fVar6))) {
          local_f8 = uVar12;
          if ((fVar9 != 0.0) ||
             (((NAN(fVar9) || (fVar6 != DAT_140e8c804)) || (NAN(fVar6) || NAN(DAT_140e8c804))))) {
            local_118 = (float)((uint)fVar9 ^ _DAT_1401c8590);
            local_f4 = fVar1 + fVar7;
            local_110 = 0;
            FUN_1400dc6f0(param_1,&local_f8,fVar7,_DAT_1401c8590 ^ (uint)fVar6);
            local_f4 = fVar8 - fVar7;
            local_110 = 0;
            local_118 = fVar6;
            local_f8 = uVar12;
            FUN_1400dc6f0(param_1,&local_f8,fVar7,fVar9);
          }
          else {
            local_f4 = fVar1 + fVar7;
            local_118 = 1.68156e-44;
            FUN_1400dc632(param_1,&local_f8,fVar7,9);
            local_f4 = fVar8 - fVar7;
            local_118 = 4.2039e-45;
            local_f8 = uVar12;
            FUN_1400dc632(param_1,&local_f8,fVar7,0);
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x50);
          if (iVar4 == *(int *)(param_1 + 0x54)) {
            if (iVar4 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar4 / 2 + iVar4;
            }
            iVar5 = iVar4 + 1;
            if (iVar4 + 1 < iVar3) {
              iVar5 = iVar3;
            }
            lVar2 = FUN_140077ab4((longlong)iVar5 << 3);
            if (*(longlong *)(param_1 + 0x58) != 0) {
              FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),
                            (longlong)*(int *)(param_1 + 0x50) << 3);
              FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
            }
            *(longlong *)(param_1 + 0x58) = lVar2;
            *(int *)(param_1 + 0x54) = iVar5;
            iVar4 = *(int *)(param_1 + 0x50);
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x58);
          }
          *(undefined4 *)(lVar2 + (longlong)iVar4 * 8) = uVar12;
          *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar1;
          iVar3 = *(int *)(param_1 + 0x50);
          iVar4 = iVar3 + 1;
          *(int *)(param_1 + 0x50) = iVar4;
          if (iVar4 == *(int *)(param_1 + 0x54)) {
            iVar3 = iVar3 + 2;
            if (iVar4 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar4 / 2 + iVar4;
            }
            if (iVar3 < iVar4) {
              iVar3 = iVar4;
            }
            lVar2 = FUN_140077ab4((longlong)iVar3 << 3);
            if (*(longlong *)(param_1 + 0x58) != 0) {
              FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),
                            (longlong)*(int *)(param_1 + 0x50) << 3);
              FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
            }
            *(longlong *)(param_1 + 0x58) = lVar2;
            *(int *)(param_1 + 0x54) = iVar3;
            iVar4 = *(int *)(param_1 + 0x50);
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x58);
          }
          *(undefined4 *)(lVar2 + (longlong)iVar4 * 8) = uVar12;
          *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar8;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        }
      }
      FUN_1400dbd54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      local_110 = 0;
      local_118 = 0.0;
      FUN_1400de294(param_1,&local_e8,&local_f0,param_3);
    }
  }
  if (DAT_140f17b40 != (local_e0 ^ (ulonglong)auStack_138)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_e0 ^ (ulonglong)auStack_138);
  }
  return;
}

