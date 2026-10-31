/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005ef46 */

void FUN_14005ef46(longlong param_1,ushort param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    param_2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x40))();
  }
  if (param_2 < 0x100) {
    FUN_14005fc40();
    return;
  }
  FUN_14005fccc(param_1);
  return;
}

