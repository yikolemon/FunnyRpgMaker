/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801573c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801573c0(uint param_1,float param_2,uint param_3,uint param_4,float param_5,
                       float param_6)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (param_4 != param_3 && 0.0 < param_2) {
    if (DAT_1802ac570 <= param_2) {
      uVar5 = (ulonglong)param_4;
    }
    else if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_a8)) {
          uVar5 = FUN_1800ff374(param_3,param_4,param_2);
          return uVar5;
        }
        goto LAB_1801576d1;
      }
      uVar5 = 0;
      if (param_2 < DAT_1802ac570) {
        uVar5 = (ulonglong)
                ((int)(param_2 * (float)(int)(param_4 - param_3) +
                      *(float *)(&DAT_1802df188 + (ulonglong)((int)param_4 < (int)param_3) * 4)) +
                param_3);
      }
    }
    else {
      fVar7 = (float)(int)param_3;
      local_84 = fVar7;
      if (((float)(_DAT_1802ac550 & (uint)fVar7) < param_5) &&
         (local_84 = param_5, (int)param_3 < 0)) {
        local_84 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      fVar8 = (float)(int)param_4;
      local_88 = fVar8;
      if (((float)(_DAT_1802ac550 & (uint)fVar8) < param_5) &&
         (local_88 = param_5, (int)param_4 < 0)) {
        local_88 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        FUN_1800ff577(&local_84,&local_88);
      }
      fVar3 = local_84;
      fVar1 = DAT_1802ac570;
      if ((int)param_3 < 0 && param_4 == 0) {
        local_88 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        param_2 = DAT_1802ac570 - param_2;
      }
      if ((int)(param_4 * param_3) < 0) {
        iVar4 = FUN_1800fed00(param_3,param_4);
        uVar2 = _DAT_1802b0ce0;
        fVar7 = (float)((uint)(float)iVar4 ^ _DAT_1802b0ce0) /
                (float)((uint)(fVar8 - fVar7) & _DAT_1802ac550);
        fVar8 = param_6 + fVar7;
        if ((param_2 < fVar7 - param_6) || (uVar5 = 0, fVar8 < param_2)) {
          if (fVar7 <= param_2) {
            param_2 = (param_2 - fVar8) / (fVar1 - fVar8);
            fVar7 = local_88 / param_5;
            goto LAB_180157680;
          }
          uVar6 = FUN_1802886b0((float)((uint)local_84 ^ _DAT_1802b0ce0) / param_5,
                                fVar1 - param_2 / (fVar7 - param_6));
          fVar7 = (float)(uVar6 ^ uVar2);
          goto LAB_180157685;
        }
      }
      else {
        if ((int)(param_4 | param_3) < 0) {
          param_2 = DAT_1802ac570 - param_2;
          fVar7 = local_84 / local_88;
          param_5 = local_88;
LAB_180157680:
          fVar7 = (float)FUN_1802886b0(fVar7,param_2);
LAB_180157685:
          fVar7 = fVar7 * param_5;
        }
        else {
          fVar7 = (float)FUN_1802886b0(local_88 / local_84,param_2);
          fVar7 = fVar7 * fVar3;
        }
        uVar5 = (ulonglong)(uint)(int)fVar7;
      }
    }
  }
  else {
    uVar5 = (ulonglong)param_3;
  }
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_a8)) {
    return uVar5;
  }
LAB_1801576d1:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_a8);
}

