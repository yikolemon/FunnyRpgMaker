/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a99c4 */

void FUN_1800a99c4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800a9bf6(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xa0;
    return;
  }
  FUN_1800a9a06(param_1);
  return;
}

