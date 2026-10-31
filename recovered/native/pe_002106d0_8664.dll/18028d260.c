/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d260 */

bool FUN_18028d260(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}

