/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2e97 */

int FUN_1400b2e97(uint param_1,int param_2,int param_3)

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

