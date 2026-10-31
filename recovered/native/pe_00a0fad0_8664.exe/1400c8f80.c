/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c8f80 */

void FUN_1400c8f80(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400c9136(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x80;
    return;
  }
  FUN_1400c8fc2(param_1);
  return;
}

