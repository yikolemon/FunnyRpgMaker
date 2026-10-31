/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400125d8 */

void FUN_1400125d8(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14001039e(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_140012618(param_1);
  return;
}

