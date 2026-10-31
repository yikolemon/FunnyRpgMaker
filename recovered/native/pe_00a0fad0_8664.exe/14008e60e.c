/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008e60e */

void FUN_14008e60e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14006af98(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_14008e64e(param_1);
  return;
}

