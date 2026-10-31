/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa22e */

void FUN_1800aa22e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800aa3e4(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x80;
    return;
  }
  FUN_1800aa270(param_1);
  return;
}

