/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10188652 */

void __thiscall FUN_10188652(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1[2] + -0x18 + *param_1 * 0x40);
  *piVar1 = *piVar1 - param_2;
  param_1[6] = param_1[6] - param_3;
  param_1[3] = param_1[3] - param_2;
  return;
}

