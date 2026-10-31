/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801683e3 */

int FUN_1801683e3(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    piVar1 = (int *)(param_1 + 0x1a8);
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_3 * 0x18 + -0x18);
  }
  return *piVar1 + param_2 + 1;
}

