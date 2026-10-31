/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100faced */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100faced(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_2 >> 8 & _DAT_102b89f0) & 0xffffffffff;
  fVar1 = (float)(int)uVar4 * _UNK_102b8a04;
  fVar2 = (float)(param_2 >> 0x10 & _UNK_102b89f4) * _UNK_102b8a08;
  fVar3 = (float)(param_2 >> 0x18) * _UNK_102b8a0c;
  *param_1 = (float)(int)(uVar4 >> 0x20) * _DAT_102b8a00;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

