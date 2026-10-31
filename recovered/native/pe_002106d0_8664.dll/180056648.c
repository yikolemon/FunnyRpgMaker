/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180056648 */

void FUN_180056648(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180054704(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_180056688(param_1);
  return;
}

