/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012eabe */

float * FUN_1012eabe(float *param_1,int param_2,uint param_3)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_3c;
  float local_38;
  
  fVar4 = (float)(int)(*(float *)(param_2 + 0x8c) * DAT_102b70e0 + DAT_102b70e0);
  if ((*(uint *)(param_2 + 0xc) >> 10 & 1) == 0) {
    fVar5 = 0.0;
    if ((*(uint *)(param_2 + 0xc) & 1) != 0) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar5 = (float)(int)(*(float *)(DAT_1039d74c + 0xd18) * DAT_102b70e0 + DAT_102b70e0);
  }
  fVar1 = *(float *)(param_2 + 0xec + (param_3 ^ 1) * 4);
  if (param_3 == 0) {
    fVar3 = *(float *)(param_2 + 0x24c);
    local_38 = (*(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x54)) - fVar4;
    local_3c = *(float *)(param_2 + 0x254) - fVar4;
    fVar2 = (float10)FUN_100fdbca(*(float *)(param_2 + 0x54) + fVar4,local_38 - fVar1);
    fVar5 = (float)fVar2;
    fVar3 = fVar3 + fVar4;
  }
  else {
    local_38 = *(float *)(param_2 + 600) - fVar4;
    local_3c = (*(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x50)) - fVar4;
    fVar5 = fVar5 + *(float *)(param_2 + 0x250);
    fVar2 = (float10)FUN_100fdbca(*(float *)(param_2 + 0x50),local_3c - fVar1);
    fVar3 = (float)fVar2;
  }
  *param_1 = fVar3;
  param_1[1] = fVar5;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  return param_1;
}

