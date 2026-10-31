/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180053d56 */

void FUN_180053d56(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_180016d60(*param_1,param_1[1] + 0x20);
  }
  if (param_1[1] != 0) {
    thunk_FUN_1802464a0(param_1[1],0x50);
    return;
  }
  return;
}

