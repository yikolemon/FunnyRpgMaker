/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002d512 */

void FUN_14002d512(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14002d71e(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_14002d558(param_1);
  return;
}

