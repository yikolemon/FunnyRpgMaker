/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e0b9a */

void FUN_1800e0b9a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800136fa(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_1800e0bda(param_1);
  return;
}

