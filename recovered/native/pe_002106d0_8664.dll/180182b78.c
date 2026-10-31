/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180182b78 */

void FUN_180182b78(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180182d92(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_180182bb8(param_1);
  return;
}

