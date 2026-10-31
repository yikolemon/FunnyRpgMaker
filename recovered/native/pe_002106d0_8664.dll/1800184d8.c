/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800184d8 */

void FUN_1800184d8(char *param_1,undefined8 param_2,uint param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_180018db3(param_1,param_1 + sVar1,0,param_2,param_3 | 0x10,1);
  return;
}

