/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e3b6c */

void FUN_1801e3b6c(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x1180) = param_2;
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_2 + 0x24);
  return;
}

