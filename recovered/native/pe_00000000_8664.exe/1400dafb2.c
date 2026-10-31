/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dafb2 */

void FUN_1400dafb2(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar1 = *piVar1 - param_2;
  param_1[8] = param_1[8] - param_3;
  param_1[4] = param_1[4] - param_2;
  return;
}

