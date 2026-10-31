/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cbd66 */

void FUN_1400cbd66(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400cbf6e(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x58;
    return;
  }
  FUN_1400cbda6(param_1);
  return;
}

