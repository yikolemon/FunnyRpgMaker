/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018199e */

void FUN_18018199e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180181bb8(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
    return;
  }
  FUN_1801819de(param_1);
  return;
}

