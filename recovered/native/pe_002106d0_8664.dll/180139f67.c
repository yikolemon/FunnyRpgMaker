/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139f67 */

int FUN_180139f67(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((uint)(param_3 + param_2) <= param_1) {
    param_3 = param_1 - param_2;
  }
  iVar1 = param_1 - param_2;
  if (param_2 != 0) {
    iVar1 = param_3;
  }
  return iVar1;
}

