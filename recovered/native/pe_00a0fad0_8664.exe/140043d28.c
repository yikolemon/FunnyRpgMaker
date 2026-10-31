/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140043d28 */

void FUN_140043d28(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14000892c(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140043d68(param_1);
  return;
}

