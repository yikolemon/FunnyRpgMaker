/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aea80 */

void FUN_1800aea80(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800aec84(*(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
    return;
  }
  FUN_1800aeaba(param_1);
  return;
}

