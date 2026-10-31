/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a717a */

void FUN_1800a717a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800a7344(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 200;
    return;
  }
  FUN_1800a71bc(param_1);
  return;
}

