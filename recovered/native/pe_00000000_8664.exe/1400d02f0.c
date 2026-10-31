/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d02f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d02f0(uint param_1,float param_2,uint param_3,uint param_4,float param_5,
                       float param_6)

{
  uint uVar1;
  float fVar2;
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
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  if (param_4 != param_3 && 0.0 < param_2) {
    if (DAT_1401c86c8 <= param_2) {
      uVar5 = (ulonglong)param_4;
    }
    else if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_a8)) {
          uVar5 = FUN_140078630(param_3,param_4,param_2);
          return uVar5;
        }
        goto LAB_1400d0601;
      }
      uVar5 = 0;
      if (param_2 < DAT_1401c86c8) {
        uVar5 = (ulonglong)
                ((int)(param_2 * (float)(int)(param_4 - param_3) +
                      *(float *)(&DAT_140211ef8 + (ulonglong)((int)param_4 < (int)param_3) * 4)) +
                param_3);
      }
    }
    else {
      fVar7 = (float)(int)param_3;
      local_84 = fVar7;
      if (((float)(_DAT_1401ced40 & (uint)fVar7) < param_5) &&
         (local_84 = param_5, (int)param_3 < 0)) {
        local_84 = (float)(_DAT_1401c8590 ^ (uint)param_5);
      }
      fVar8 = (float)(int)param_4;
      local_88 = fVar8;
      if (((float)(_DAT_1401ced40 & (uint)fVar8) < param_5) &&
         (local_88 = param_5, (int)param_4 < 0)) {
        local_88 = (float)(_DAT_1401c8590 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        FUN_140078833(&local_84,&local_88);
      }
      fVar3 = local_84;
      fVar2 = DAT_1401c86c8;
      if ((int)param_3 < 0 && param_4 == 0) {
        local_88 = (float)(_DAT_1401c8590 ^ (uint)param_5);
      }
      if ((int)param_4 < (int)param_3) {
        param_2 = DAT_1401c86c8 - param_2;
      }
      if ((int)(param_4 * param_3) < 0) {
        iVar4 = FUN_140077fbc(param_3,param_4);
        uVar1 = _DAT_1401c8590;
        fVar7 = (float)((uint)(float)iVar4 ^ _DAT_1401c8590) /
                (float)((uint)(fVar8 - fVar7) & _DAT_1401ced40);
        fVar8 = param_6 + fVar7;
        if ((param_2 < fVar7 - param_6) || (uVar5 = 0, fVar8 < param_2)) {
          if (fVar7 <= param_2) {
            param_2 = (param_2 - fVar8) / (fVar2 - fVar8);
            fVar7 = local_88 / param_5;
            goto LAB_1400d05b0;
          }
          uVar6 = FUN_1401a65a0((float)((uint)local_84 ^ _DAT_1401c8590) / param_5,
                                fVar2 - param_2 / (fVar7 - param_6));
          fVar7 = (float)(uVar6 ^ uVar1);
          goto LAB_1400d05b5;
        }
      }
      else {
        if ((int)(param_4 | param_3) < 0) {
          param_2 = DAT_1401c86c8 - param_2;
          fVar7 = local_84 / local_88;
          param_5 = local_88;
LAB_1400d05b0:
          fVar7 = (float)FUN_1401a65a0(fVar7,param_2);
LAB_1400d05b5:
          fVar7 = fVar7 * param_5;
        }
        else {
          fVar7 = (float)FUN_1401a65a0(local_88 / local_84,param_2);
          fVar7 = fVar7 * fVar3;
        }
        uVar5 = (ulonglong)(uint)(int)fVar7;
      }
    }
  }
  else {
    uVar5 = (ulonglong)param_3;
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_a8)) {
    return uVar5;
  }
LAB_1400d0601:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_a8);
}

