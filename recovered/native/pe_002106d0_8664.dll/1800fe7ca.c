/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe7ca */

void FUN_1800fe7ca(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_1);
  uVar2 = FUN_1800fe7f8(sVar1 + 1);
  FUN_1802a82f0(uVar2,param_1,sVar1 + 1);
  return;
}

