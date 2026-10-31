/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f0ae */

void FUN_14016f0ae(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_14016f0da(param_1 + 0x18);
  FUN_14016f0da(param_1 + 0x48);
  return;
}

