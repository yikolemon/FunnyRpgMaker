/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006f544 */

void FUN_14006f544(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14006d042(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_14006f584(param_1);
  return;
}

