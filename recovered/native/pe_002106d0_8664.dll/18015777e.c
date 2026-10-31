/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015777e */

undefined8
FUN_18015777e(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_98;
  fVar6 = 0.0;
  uVar7 = 0;
  local_78 = param_3;
  local_74 = param_4;
  if (param_4 - param_3 != 0) {
    uVar1 = param_4;
    uVar2 = param_3;
    if (param_3 <= param_4) {
      uVar1 = param_3;
      uVar2 = param_4;
    }
    uVar1 = FUN_180157b0d(param_2,uVar1,uVar2);
    if (param_5 <= 0.0) {
      uVar7 = 0;
      fVar6 = (float)(int)(uVar1 - param_3) / (float)(int)(param_4 - param_3);
    }
    else {
      uVar2 = param_4;
      uVar3 = param_3;
      if (param_4 < param_3) {
        FUN_180147761(&local_78,&local_74);
        uVar2 = local_74;
        uVar3 = local_78;
      }
      fVar4 = (float)uVar1;
      fVar8 = param_5;
      if (param_5 <= (float)uVar3) {
        fVar8 = (float)uVar3;
      }
      uVar7 = 0;
      fVar6 = 0.0;
      if (fVar8 < fVar4) {
        if (param_5 <= (float)uVar2) {
          param_5 = (float)uVar2;
        }
        if (param_5 <= fVar4) {
          uVar7 = 0;
          fVar6 = DAT_1802ac570;
        }
        else {
          uVar5 = FUN_180287c90(fVar4 / fVar8);
          uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
          fVar6 = (float)FUN_180287c90(param_5 / fVar8);
          fVar6 = (float)uVar5 / fVar6;
        }
      }
      if (param_4 < param_3) {
        fVar6 = DAT_1802ac570 - fVar6;
        uVar7 = 0;
      }
    }
  }
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_98);
  }
  return CONCAT44(uVar7,fVar6);
}

