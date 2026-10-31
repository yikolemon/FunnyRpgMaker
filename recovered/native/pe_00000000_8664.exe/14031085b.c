/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031085b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14031085b(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  
  uVar4 = CONCAT44(param_2,param_2 >> 8 & _DAT_1404efa70) & 0xffffffffff;
  fVar1 = (float)(int)uVar4 * _UNK_1404efa84;
  fVar2 = (float)(param_2 >> 0x10 & _UNK_1404efa74) * _UNK_1404efa88;
  fVar3 = (float)(param_2 >> 0x18) * _UNK_1404efa8c;
  *param_1 = (float)(int)(uVar4 >> 0x20) * _DAT_1404efa80;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

