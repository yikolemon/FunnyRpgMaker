/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401103b3 */

int FUN_1401103b3(longlong param_1,int param_2,int param_3)

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

