/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180134b25 */

float * FUN_180134b25(float *param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)(int)(*(float *)(param_2 + 0x9c) * DAT_1802dbb2c + DAT_1802dbb2c);
  if ((*(uint *)(param_2 + 0x14) >> 10 & 1) == 0) {
    fVar3 = 0.0;
    if ((*(uint *)(param_2 + 0x14) & 1) != 0) {
      fVar3 = fVar4;
    }
  }
  else {
    fVar3 = (float)(int)(*(float *)(DAT_180419160 + 0xe00) * DAT_1802dbb2c + DAT_1802dbb2c);
  }
  fVar1 = *(float *)(param_2 + 0xfc + (longlong)(int)(param_3 ^ 1) * 4);
  if (param_3 == 0) {
    fVar2 = *(float *)(param_2 + 0x278);
    fVar5 = (*(float *)(param_2 + 0x6c) + *(float *)(param_2 + 100)) - fVar4;
    fVar6 = *(float *)(param_2 + 0x280) - fVar4;
    fVar3 = (float)FUN_180102463(*(float *)(param_2 + 100) + fVar4,fVar5 - fVar1);
    fVar2 = fVar2 + fVar4;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x284) - fVar4;
    fVar6 = (*(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x60)) - fVar4;
    fVar3 = fVar3 + *(float *)(param_2 + 0x27c);
    fVar2 = (float)FUN_180102463(*(float *)(param_2 + 0x60),fVar6 - fVar1);
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar6;
  param_1[3] = fVar5;
  return param_1;
}

