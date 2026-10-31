/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff38b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ff38b(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_2 >> 8 & _DAT_1802de5a0) & 0xffffffffff;
  fVar1 = (float)(int)uVar4 * _UNK_1802de5b4;
  fVar2 = (float)(param_2 >> 0x10 & _UNK_1802de5a4) * _UNK_1802de5b8;
  fVar3 = (float)(param_2 >> 0x18) * _UNK_1802de5bc;
  *param_1 = (float)(int)(uVar4 >> 0x20) * _DAT_1802de5b0;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

