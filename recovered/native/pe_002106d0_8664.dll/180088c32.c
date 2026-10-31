/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088c32 */

void FUN_180088c32(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180088e0e(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_180088c78(param_1);
  return;
}

