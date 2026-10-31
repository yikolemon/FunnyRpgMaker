/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c0a7a */

void FUN_1400c0a7a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400c0c94(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_1400c0aba(param_1);
  return;
}

