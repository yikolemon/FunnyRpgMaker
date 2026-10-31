/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400be020 */

void FUN_1400be020(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400be230(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_1400be060(param_1);
  return;
}

