/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801587bf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801587bf(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,float param_5,
             float param_6)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  fVar6 = (float)param_4;
  uVar4 = (uint)((ulonglong)param_3 >> 0x20);
  fVar5 = (float)param_3;
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_c8;
  fVar7 = 0.0;
  uVar8 = 0;
  local_a8 = fVar5;
  local_a4 = fVar6;
  if ((fVar5 != fVar6) || (NAN(fVar5) || NAN(fVar6))) {
    fVar7 = fVar6;
    if (fVar5 < fVar6) {
      fVar7 = fVar5;
    }
    uVar3 = FUN_1801179ee(param_2,fVar7);
    uVar8 = (uint)((ulonglong)uVar3 >> 0x20);
    fVar7 = (float)uVar3;
    if (param_5 <= 0.0) {
      fVar7 = (fVar7 - fVar5) / (fVar6 - fVar5);
    }
    else {
      fVar2 = fVar5;
      if (fVar6 < fVar5) {
        FUN_1800ff577(&local_a8,&local_a4);
        uVar4 = 0;
        fVar2 = local_a8;
      }
      uVar1 = _DAT_1802b0ce0;
      fVar9 = fVar2;
      if ((float)(_DAT_1802ac550 & (uint)fVar2) < param_5) {
        fVar9 = (float)(~-(uint)(fVar2 < 0.0) & (uint)param_5 |
                       (_DAT_1802b0ce0 ^ (uint)param_5) & -(uint)(fVar2 < 0.0));
      }
      fVar10 = local_a4;
      if ((float)(_DAT_1802ac550 & (uint)local_a4) < param_5) {
        fVar10 = (float)(~-(uint)(local_a4 < 0.0) & (uint)param_5 |
                        (_DAT_1802b0ce0 ^ (uint)param_5) & -(uint)(local_a4 < 0.0));
      }
      if (((fVar2 != 0.0) || (NAN(fVar2))) || (0.0 <= local_a4)) {
        if (((fVar2 < 0.0) && (local_a4 == 0.0)) && (!NAN(local_a4))) {
          fVar10 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
        }
      }
      else {
        fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      uVar8 = 0;
      fVar11 = 0.0;
      if (fVar9 < fVar7) {
        if (fVar10 <= fVar7) {
          uVar8 = 0;
          fVar11 = DAT_1802ac570;
        }
        else if (0.0 <= fVar2 * local_a4) {
          if ((fVar2 < 0.0) || (local_a4 < 0.0)) {
            fVar7 = (float)FUN_180287c90(fVar7 / fVar10);
            fVar2 = (float)FUN_180287c90(fVar9 / fVar10);
            uVar8 = 0;
            fVar11 = DAT_1802ac570 - fVar7 / fVar2;
          }
          else {
            uVar3 = FUN_180287c90(fVar7 / fVar9);
            uVar8 = (uint)((ulonglong)uVar3 >> 0x20);
            fVar7 = (float)FUN_180287c90(fVar10 / fVar9);
            fVar11 = (float)uVar3 / fVar7;
          }
        }
        else {
          uVar8 = uVar4 ^ _UNK_1802b0ce4;
          fVar11 = (float)((uint)fVar2 ^ _DAT_1802b0ce0) / (local_a4 - fVar2);
          if ((param_2 != 0.0) || (NAN(param_2))) {
            if (0.0 <= param_2) {
              fVar7 = (float)FUN_180287c90(fVar7 / param_5);
              fVar2 = (float)FUN_180287c90(fVar10 / param_5);
              uVar8 = 0;
              fVar11 = (DAT_1802ac570 - (param_6 + fVar11)) * (fVar7 / fVar2) + param_6 + fVar11;
            }
            else {
              fVar7 = (float)FUN_180287c90((float)((uint)fVar7 ^ _DAT_1802b0ce0) / param_5);
              fVar2 = (float)FUN_180287c90((float)((uint)fVar9 ^ uVar1) / param_5);
              fVar11 = (fVar11 - param_6) * (DAT_1802ac570 - fVar7 / fVar2);
            }
          }
        }
      }
      uVar8 = ~(uint)((ulonglong)param_4 >> 0x20) & uVar8;
      fVar7 = (float)(~-(uint)(fVar6 < fVar5) & (uint)fVar11 |
                     (uint)(DAT_1802ac570 - fVar11) & -(uint)(fVar6 < fVar5));
    }
  }
  if (DAT_180402640 != (local_a0 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_a0 ^ (ulonglong)auStack_c8);
  }
  return CONCAT44(uVar8,fVar7);
}

