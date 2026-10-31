/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017f722 */

void FUN_14017f722(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = param_1[4];
  iVar2 = *param_1 + param_1[2];
  iVar1 = param_1[2] + param_1[4];
  param_1[6] = iVar1 >> 1;
  param_1[4] = iVar2 + iVar1 >> 2;
  param_1[2] = iVar2 >> 1;
  param_1[9] = param_1[5];
  iVar1 = param_1[1] + param_1[3];
  iVar2 = param_1[3] + param_1[5];
  param_1[7] = iVar2 >> 1;
  param_1[5] = iVar1 + iVar2 >> 2;
  param_1[3] = iVar1 >> 1;
  return;
}

