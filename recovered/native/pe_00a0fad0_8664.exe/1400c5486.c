/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5486 */

void FUN_1400c5486(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400c568e(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
    return;
  }
  FUN_1400c54c6(param_1);
  return;
}

