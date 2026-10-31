/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5b3a */

void FUN_1400c5b3a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400c5d04(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 200;
    return;
  }
  FUN_1400c5b7c(param_1);
  return;
}

