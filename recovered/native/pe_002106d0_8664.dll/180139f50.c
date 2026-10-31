/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139f50 */

int FUN_180139f50(uint param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 <= (uint)(param_4 - param_2)) {
    param_4 = param_2 + param_1;
  }
  iVar1 = param_2 + param_1;
  if (param_2 != 0) {
    iVar1 = param_4;
  }
  return iVar1;
}

