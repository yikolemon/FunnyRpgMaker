/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005900a */

void FUN_14005900a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400591fe(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_14005904a(param_1);
  return;
}

