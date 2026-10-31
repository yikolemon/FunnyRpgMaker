/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093a2a */

void FUN_140093a2a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return;
}

