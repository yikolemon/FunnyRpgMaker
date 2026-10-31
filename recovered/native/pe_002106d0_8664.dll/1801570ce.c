/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801570ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801570ce(undefined8 param_1,int param_2,uint param_3,uint param_4,float param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 in_XMM1_Qa;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_84;
  ulonglong local_80;
  
  uVar7 = (uint)((ulonglong)in_XMM1_Qa >> 0x20);
  local_80 = DAT_180402640 ^ (ulonglong)auStack_a8;
  fVar11 = 0.0;
  uVar12 = 0;
  local_88 = param_3;
  local_84 = param_4;
  if (param_4 - param_3 != 0) {
    uVar12 = param_4;
    uVar3 = param_3;
    if ((int)param_3 <= (int)param_4) {
      uVar12 = param_3;
      uVar3 = param_4;
    }
    iVar2 = FUN_18012bcdf(param_2,uVar12,uVar3);
    if (param_5 <= 0.0) {
      uVar12 = 0;
      fVar11 = (float)(int)(iVar2 - param_3) / (float)(int)(param_4 - param_3);
    }
    else {
      uVar3 = param_3;
      if ((int)param_4 < (int)param_3) {
        FUN_180147761(&local_88,&local_84);
        uVar3 = local_88;
      }
      uVar1 = _DAT_1802b0ce0;
      fVar6 = (float)(int)uVar3;
      fVar9 = fVar6;
      if (((float)(_DAT_1802ac550 & (uint)fVar6) < param_5) && (fVar9 = param_5, (int)uVar3 < 0)) {
        fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      fVar8 = (float)(int)local_84;
      fVar10 = fVar8;
      if (((float)(_DAT_1802ac550 & (uint)fVar8) < param_5) && (fVar10 = param_5, (int)local_84 < 0)
         ) {
        fVar10 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      if ((int)local_84 < 0 && uVar3 == 0) {
        fVar9 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      else if ((int)uVar3 < 0 && local_84 == 0) {
        fVar10 = (float)(_DAT_1802b0ce0 ^ (uint)param_5);
      }
      fVar4 = (float)iVar2;
      uVar12 = 0;
      fVar11 = 0.0;
      if (fVar9 < fVar4) {
        if (fVar10 <= fVar4) {
          uVar12 = 0;
          fVar11 = DAT_1802ac570;
        }
        else if ((int)(local_84 * uVar3) < 0) {
          uVar12 = uVar7 ^ _UNK_1802b0ce4;
          fVar11 = (float)((uint)fVar6 ^ _DAT_1802b0ce0) / (fVar8 - fVar6);
          if (param_2 != 0) {
            if (param_2 < 0) {
              fVar6 = (float)FUN_180287c90((float)((uint)fVar4 ^ _DAT_1802b0ce0) / param_5);
              fVar9 = (float)FUN_180287c90((float)((uint)fVar9 ^ uVar1) / param_5);
              fVar11 = (fVar11 - param_6) * (DAT_1802ac570 - fVar6 / fVar9);
            }
            else {
              fVar9 = (float)FUN_180287c90(fVar4 / param_5);
              fVar6 = (float)FUN_180287c90(fVar10 / param_5);
              uVar12 = 0;
              fVar11 = (DAT_1802ac570 - (param_6 + fVar11)) * (fVar9 / fVar6) + param_6 + fVar11;
            }
          }
        }
        else if ((int)(local_84 | uVar3) < 0) {
          fVar11 = (float)FUN_180287c90(fVar4 / fVar10);
          fVar9 = (float)FUN_180287c90(fVar9 / fVar10);
          uVar12 = 0;
          fVar11 = DAT_1802ac570 - fVar11 / fVar9;
        }
        else {
          uVar5 = FUN_180287c90(fVar4 / fVar9);
          uVar12 = (uint)((ulonglong)uVar5 >> 0x20);
          fVar11 = (float)FUN_180287c90(fVar10 / fVar9);
          fVar11 = (float)uVar5 / fVar11;
        }
      }
      if ((int)param_4 < (int)param_3) {
        fVar11 = DAT_1802ac570 - fVar11;
        uVar12 = 0;
      }
    }
  }
  if (DAT_180402640 != (local_80 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_80 ^ (ulonglong)auStack_a8);
  }
  return CONCAT44(uVar12,fVar11);
}

