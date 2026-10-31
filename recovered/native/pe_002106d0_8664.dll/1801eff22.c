/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eff22 */

void FUN_1801eff22(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_1;
  *param_1 = *(undefined8 *)((longlong)param_1 + 4);
  return;
}

