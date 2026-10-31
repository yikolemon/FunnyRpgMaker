/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d1a78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d1a78(uint param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  if (0.0 < param_2) {
    if (((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) && (param_2 < DAT_1401c86c8)) {
      if (param_5 <= 0.0) {
        if ((param_1 & 0xfffffffe) == 8) {
          if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_a8)) {
            FUN_140048631(DAT_140f17b40,param_4,param_2);
            return;
          }
          goto LAB_1400d1dcc;
        }
      }
      else {
        local_84 = param_3;
        if ((float)(_DAT_1401ced40 & (uint)param_3) < param_5) {
          local_84 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_5 |
                            (_DAT_1401c8590 ^ (uint)param_5) & -(uint)(param_3 < 0.0));
        }
        local_88 = param_4;
        if ((float)(_DAT_1401ced40 & (uint)param_4) < param_5) {
          local_88 = (float)(~-(uint)(param_4 < 0.0) & (uint)param_5 |
                            (_DAT_1401c8590 ^ (uint)param_5) & -(uint)(param_4 < 0.0));
        }
        if (param_4 < param_3) {
          FUN_140078833(&local_84,&local_88);
        }
        fVar2 = DAT_1401c86c8;
        if (((param_3 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_88 = (float)(_DAT_1401c8590 ^ (uint)param_5);
        }
        fVar6 = (float)(~-(uint)(param_4 < param_3) & (uint)param_2 |
                       (uint)(DAT_1401c86c8 - param_2) & -(uint)(param_4 < param_3));
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            fVar6 = DAT_1401c86c8 - fVar6;
            fVar2 = local_84 / local_88;
          }
          else {
            fVar2 = local_88 / local_84;
          }
          FUN_1401a65a0(fVar2,fVar6);
        }
        else {
          uVar1 = FUN_14004863e();
          fVar5 = (float)(uVar1 ^ _DAT_1401c8590) /
                  (float)((uint)(param_4 - param_3) & _DAT_1401ced40);
          fVar7 = param_6 + fVar5;
          if ((fVar6 < fVar5 - param_6) || (fVar7 < fVar6)) {
            if (fVar5 <= fVar6) {
              FUN_1401a65a0(local_88 / param_5,(fVar6 - fVar7) / (fVar2 - fVar7));
            }
            else {
              auVar3._0_4_ = (float)((uint)local_84 ^ _DAT_1401c8590);
              auVar3._4_4_ = _UNK_1401c8594;
              auVar3._8_4_ = _UNK_1401c8598;
              auVar3._12_4_ = _UNK_1401c859c;
              auVar4._4_12_ = auVar3._4_12_;
              auVar4._0_4_ = auVar3._0_4_ / param_5;
              FUN_1401a65a0(auVar4._0_8_,fVar2 - fVar6 / (fVar5 - param_6));
            }
          }
        }
      }
    }
  }
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_a8)) {
    return;
  }
LAB_1400d1dcc:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_a8);
}

