/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079038 */

void FUN_140079038(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140041956(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140079078(param_1);
  return;
}

