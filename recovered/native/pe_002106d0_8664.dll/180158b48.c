/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180158b48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180158b48(uint param_1,float param_2,float param_3,float param_4,float param_5,
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
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (0.0 < param_2) {
    if (((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) && (param_2 < DAT_1802ac570)) {
      if (param_5 <= 0.0) {
        if ((param_1 & 0xfffffffe) == 8) {
          if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_a8)) {
            FUN_1800eebd5(DAT_180402640,param_4,param_2);
            return;
          }
          goto LAB_180158e9c;
        }
      }
      else {
        local_84 = param_3;
        if ((float)(_DAT_1802ac550 & (uint)param_3) < param_5) {
          local_84 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_5 |
                            (_DAT_1802b0ce0 ^ (uint)param_5) & -(uint)(param_3 < 0.0));
        }
        local_88 = param_4;
        if ((float)(_DAT_1802ac550 & (uint)param_4) < param_5) {
          local_88 = (float)(~-(uint)(param_4 < 0.0) & (uint)param_5 |
                            (_DAT_1802b0ce0 ^ (uint)param_5) & -(uint)(param_4 < 0.0));
        }
        if (param_4 < param_3) {
          FUN_1800ff577(&local_84,&local_88);
        }
        fVar2 = DAT_1802ac570;
        if (((param_3 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_88 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
        fVar6 = (float)(~-(uint)(param_4 < param_3) & (uint)param_2 |
                       (uint)(DAT_1802ac570 - param_2) & -(uint)(param_4 < param_3));
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            fVar6 = DAT_1802ac570 - fVar6;
            fVar2 = local_84 / local_88;
          }
          else {
            fVar2 = local_88 / local_84;
          }
          FUN_1802886b0(fVar2,fVar6);
        }
        else {
          uVar1 = FUN_1800eebe2();
          fVar5 = (float)(uVar1 ^ _DAT_1802b0ce0) /
                  (float)((uint)(param_4 - param_3) & _DAT_1802ac550);
          fVar7 = param_6 + fVar5;
          if ((fVar6 < fVar5 - param_6) || (fVar7 < fVar6)) {
            if (fVar5 <= fVar6) {
              FUN_1802886b0(local_88 / param_5,(fVar6 - fVar7) / (fVar2 - fVar7));
            }
            else {
              auVar3._0_4_ = (float)((uint)local_84 ^ _DAT_1802b0ce0);
              auVar3._4_4_ = _UNK_1802b0ce4;
              auVar3._8_4_ = _UNK_1802b0ce8;
              auVar3._12_4_ = _UNK_1802b0cec;
              auVar4._4_12_ = auVar3._4_12_;
              auVar4._0_4_ = auVar3._0_4_ / param_5;
              FUN_1802886b0(auVar4._0_8_,fVar2 - fVar6 / (fVar5 - param_6));
            }
          }
        }
      }
    }
  }
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_a8)) {
    return;
  }
LAB_180158e9c:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_a8);
}

