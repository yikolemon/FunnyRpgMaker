/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400259c4 */

void FUN_1400259c4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14000169c(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140025a04(param_1);
  return;
}

