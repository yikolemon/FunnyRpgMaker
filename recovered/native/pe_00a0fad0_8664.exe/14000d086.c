/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d086 */

void FUN_14000d086(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140006874(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_14000d0c6(param_1);
  return;
}

