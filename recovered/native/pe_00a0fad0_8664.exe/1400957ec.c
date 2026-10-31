/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400957ec */

void FUN_1400957ec(longlong param_1,ushort param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    param_2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 8) + 0x40))();
  }
  if (param_2 < 0x100) {
    FUN_1400964e6();
    return;
  }
  FUN_140096572(param_1);
  return;
}

