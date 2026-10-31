/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180095316 */

void FUN_180095316(longlong param_1,ushort param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    param_2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x40))();
  }
  if (param_2 < 0x100) {
    FUN_18001f28a();
    return;
  }
  FUN_180096010(param_1);
  return;
}

