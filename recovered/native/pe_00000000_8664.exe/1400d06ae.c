/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d06ae */

undefined8
FUN_1400d06ae(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,float param_5)

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
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_98;
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
    uVar1 = FUN_1400d0a3d(param_2,uVar1,uVar2);
    if (param_5 <= 0.0) {
      uVar7 = 0;
      fVar6 = (float)(int)(uVar1 - param_3) / (float)(int)(param_4 - param_3);
    }
    else {
      uVar2 = param_4;
      uVar3 = param_3;
      if (param_4 < param_3) {
        FUN_1400c0691(&local_78,&local_74);
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
          fVar6 = DAT_1401c86c8;
        }
        else {
          uVar5 = FUN_1401a5b80(fVar4 / fVar8);
          uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
          fVar6 = (float)FUN_1401a5b80(param_5 / fVar8);
          fVar6 = (float)uVar5 / fVar6;
        }
      }
      if (param_4 < param_3) {
        fVar6 = DAT_1401c86c8 - fVar6;
        uVar7 = 0;
      }
    }
  }
  if (DAT_140f17b40 != (local_70 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_70 ^ (ulonglong)auStack_98);
  }
  return CONCAT44(uVar7,fVar6);
}

