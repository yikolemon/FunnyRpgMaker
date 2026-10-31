/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400701a4 */

void FUN_1400701a4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14006e0c4(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_1400701e4(param_1);
  return;
}

