/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a235a */

void FUN_1800a235a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800a2560(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x80;
    return;
  }
  FUN_1800a239c(param_1);
  return;
}

