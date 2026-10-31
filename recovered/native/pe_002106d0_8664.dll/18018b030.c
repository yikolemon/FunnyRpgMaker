/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018b030 */

void FUN_18018b030(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_18018b240(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_18018b070(param_1);
  return;
}

