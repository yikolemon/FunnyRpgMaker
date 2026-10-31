/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a27d8 */

void FUN_1800a27d8(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800a29e0(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x58;
    return;
  }
  FUN_1800a2818(param_1);
  return;
}

