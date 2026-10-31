/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400120e8 */

void FUN_1400120e8(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14000fd22(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_140012128(param_1);
  return;
}

