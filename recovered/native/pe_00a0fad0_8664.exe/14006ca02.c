/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006ca02 */

void FUN_14006ca02(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14006cbde(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_14006ca48(param_1);
  return;
}

