/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a6c88 */

void FUN_1400a6c88(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400a6eb0(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0xa0;
    return;
  }
  FUN_1400a6cca(param_1);
  return;
}

