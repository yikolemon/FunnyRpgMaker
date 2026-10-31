/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027bdc0 */

int FUN_1027bdc0(ushort *param_1,ushort *param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
      param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

