/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193b2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193b2c(int param_1,float param_2,float param_3,undefined4 param_4,uint param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_24;
  fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x14);
  if (param_5 < 4) {
    fVar2 = DAT_102b8e90 * fVar1 * param_6;
    switch(param_5) {
    case 0:
      fVar2 = (float)((uint)fVar2 ^ _DAT_1028f620);
    case 1:
      fVar7 = fVar2 * _DAT_102b964c;
      fVar5 = DAT_102b8d14 * fVar2;
      fVar6 = fVar2 * 0.0;
      fVar3 = fVar2 * _DAT_10301420;
      fVar4 = fVar2 * _UNK_10301424;
      fVar2 = fVar3;
      break;
    case 2:
      fVar2 = (float)((uint)fVar2 ^ _DAT_1028f620);
    case 3:
      fVar5 = (float)DAT_10301430 * fVar2;
      fVar6 = (float)((ulonglong)DAT_10301430 >> 0x20) * fVar2;
      fVar3 = fVar2 * _DAT_10301440;
      fVar4 = fVar2 * _UNK_10301454;
      fVar2 = fVar2 * _DAT_10301450;
      fVar7 = fVar4;
    }
  }
  else {
    fVar4 = 0.0;
    fVar3 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar2 = 0.0;
    fVar7 = 0.0;
  }
  fVar1 = fVar1 * DAT_102b70e0;
  param_2 = fVar1 + param_2;
  param_3 = param_6 * fVar1 + param_3;
  local_14 = CONCAT44(fVar4 + param_3,fVar2 + param_2);
  local_1c = CONCAT44(fVar7 + param_3,fVar3 + param_2);
  local_24 = CONCAT44(param_3 + fVar6,param_2 + fVar5);
  FUN_1018be36(&local_24,&local_1c,&local_14,param_4);
  if (DAT_10388d00 == (local_c ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

