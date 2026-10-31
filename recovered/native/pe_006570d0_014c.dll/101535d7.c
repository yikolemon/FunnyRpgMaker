/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101535d7 */

float10 FUN_101535d7(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  uVar2 = param_4;
  uVar1 = param_3;
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_20 = 0.0;
  iVar6 = param_4 - param_3;
  if (iVar6 != 0) {
    if (param_4 < param_3) {
      uVar12 = CONCAT44(param_3,param_4);
    }
    else {
      uVar12 = CONCAT44(param_4,param_3);
    }
    uVar3 = FUN_101539c3(param_2,uVar12);
    if (param_5 <= 0.0) {
      local_20 = (float)(int)(uVar3 - uVar1) / (float)iVar6;
    }
    else {
      uVar4 = uVar2;
      uVar5 = uVar1;
      if (uVar2 < uVar1) {
        FUN_101412d9(&param_3,&param_4);
        uVar4 = param_4;
        uVar5 = param_3;
      }
      fVar10 = (float)((double)((ulonglong)uVar5 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      fVar9 = (float)((double)((ulonglong)uVar3 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      fVar11 = param_5;
      if (param_5 <= fVar10) {
        fVar11 = fVar10;
      }
      local_20 = 0.0;
      if (fVar11 < fVar9) {
        fVar8 = (float)((double)((ulonglong)uVar4 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
        fVar10 = param_5;
        if (param_5 <= fVar8) {
          fVar10 = fVar8;
        }
        local_20 = DAT_1028b430;
        if (fVar9 < fVar10) {
          local_2c = fVar10;
          local_28 = fVar11;
          fVar7 = (float10)FUN_1026fa50((double)(fVar9 / fVar11));
          local_24 = (float)fVar7;
          local_18 = local_24;
          fVar7 = (float10)FUN_1026fa50((double)(local_2c / local_28));
          local_1c = (float)fVar7;
          local_20 = local_24 / local_1c;
        }
      }
      if (uVar2 < uVar1) {
        local_20 = DAT_1028b430 - local_20;
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)local_20;
}

