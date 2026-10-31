/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800632aa */

void FUN_1800632aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800634d2(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_1800632f0(param_1);
  return;
}

