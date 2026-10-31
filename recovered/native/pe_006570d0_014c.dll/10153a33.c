/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10153a33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10153a33(undefined4 param_1,int param_2,int param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,float param_8,float param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uStack_1c = param_7;
  local_20 = param_6;
  local_24 = param_5;
  local_28 = param_4;
  fVar9 = 0.0;
  if (param_6 != param_4 || param_7 != param_5) {
    uVar11 = param_6;
    uVar12 = param_7;
    uVar13 = param_4;
    uVar14 = param_5;
    if ((SBORROW4(param_5,param_7) != SBORROW4(param_5 - param_7,(uint)(param_4 < param_6))) !=
        (int)((param_5 - param_7) - (uint)(param_4 < param_6)) < 0) {
      uVar11 = param_4;
      uVar12 = param_5;
      uVar13 = param_6;
      uVar14 = param_7;
    }
    lVar10 = FUN_1012f80d(param_2,param_3,uVar11,uVar12,uVar13,uVar14);
    if (param_8 <= 0.0) {
      fVar9 = (float)((double)(lVar10 - CONCAT44(param_5,param_4)) /
                     (double)CONCAT44((param_7 - param_5) - (uint)(param_6 < param_4),
                                      param_6 - param_4));
    }
    else {
      bVar5 = SBORROW4(param_7,param_5) != SBORROW4(param_7 - param_5,(uint)(param_6 < param_4));
      bVar4 = (int)((param_7 - param_5) - (uint)(param_6 < param_4)) < 0;
      if (bVar5 != bVar4) {
        FUN_1015466a(&local_28,&local_20);
        param_5 = local_24;
        param_4 = local_28;
      }
      dVar1 = (double)CONCAT44(param_5,param_4);
      dVar8 = (double)param_8;
      if ((double)(_DAT_1028b420 & (ulonglong)dVar1) < dVar8) {
        fVar9 = param_8;
        if ((int)param_5 < 0) {
          fVar9 = (float)(_DAT_1028f620 ^ (uint)param_8);
        }
        dVar1 = (double)fVar9;
      }
      dVar2 = (double)CONCAT44(uStack_1c,local_20);
      if ((double)(_DAT_1028b420 & (ulonglong)dVar2) < dVar8) {
        fVar9 = param_8;
        if ((int)uStack_1c < 0) {
          fVar9 = (float)(_DAT_1028f620 ^ (uint)param_8);
        }
        dVar2 = (double)fVar9;
      }
      if ((int)uStack_1c < 0 && (param_4 == 0 && param_5 == 0)) {
        dVar1 = (double)(float)((uint)param_8 ^ _DAT_1028f620);
      }
      else if ((int)param_5 < 0 && (local_20 == 0 && uStack_1c == 0)) {
        dVar2 = (double)(float)((uint)param_8 ^ _DAT_1028f620);
      }
      dVar3 = (double)lVar10;
      fVar9 = 0.0;
      if ((dVar1 < dVar3) && (fVar9 = DAT_1028b430, dVar3 < dVar2)) {
        if ((int)(param_4 * uStack_1c +
                 local_20 * param_5 + (int)((ulonglong)local_20 * (ulonglong)param_4 >> 0x20)) < 0)
        {
          fVar9 = (float)CONCAT44(param_5,param_4);
          fVar9 = (float)(_DAT_1028f620 ^ (uint)fVar9) /
                  ((float)CONCAT44(uStack_1c,local_20) - fVar9);
          if (param_2 != 0 || param_3 != 0) {
            if (param_3 < 0) {
              fVar6 = (float10)FUN_1026fa50((double)((ulonglong)dVar3 ^ _DAT_1028f730) / dVar8);
              fVar7 = (float10)FUN_1026fa50((double)((ulonglong)dVar1 ^ _DAT_1028f730) / dVar8);
              fVar9 = (fVar9 - param_9) * (DAT_1028b430 - (float)((double)fVar6 / (double)fVar7));
            }
            else {
              fVar6 = (float10)FUN_1026fa50(dVar3 / dVar8);
              fVar7 = (float10)FUN_1026fa50(dVar2 / dVar8);
              fVar9 = (DAT_1028b430 - (param_9 + fVar9)) * (float)((double)fVar6 / (double)fVar7) +
                      param_9 + fVar9;
            }
          }
        }
        else if ((int)(uStack_1c | param_5) < 0) {
          fVar6 = (float10)FUN_1026fa50(dVar3 / dVar2);
          fVar7 = (float10)FUN_1026fa50(dVar1 / dVar2);
          fVar9 = DAT_1028b430 - (float)((double)fVar6 / (double)fVar7);
        }
        else {
          fVar6 = (float10)FUN_1026fa50(dVar3 / dVar1);
          fVar7 = (float10)FUN_1026fa50(dVar2 / dVar1);
          fVar9 = (float)((double)fVar6 / (double)fVar7);
        }
      }
      if (bVar5 != bVar4) {
        fVar9 = DAT_1028b430 - fVar9;
      }
    }
  }
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)fVar9;
}

