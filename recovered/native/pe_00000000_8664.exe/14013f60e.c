/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013f60e */

void FUN_14013f60e(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)param_1;
  *param_1 = *(undefined8 *)((longlong)param_1 + 4);
  return;
}

