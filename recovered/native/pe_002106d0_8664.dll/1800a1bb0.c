/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a1bb0 */

void FUN_1800a1bb0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800a1dd8(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xa0;
    return;
  }
  FUN_1800a1bf2(param_1);
  return;
}

