/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008b334 */

void FUN_18008b334(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180088ac2(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18008b374(param_1);
  return;
}

