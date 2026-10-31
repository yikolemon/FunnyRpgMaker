/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162ffc */

int FUN_10162ffc(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_1 + 0x16c);
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0x18c) + param_3 * 0x18 + -0x18);
  }
  return param_2 + *piVar1 + 1;
}

