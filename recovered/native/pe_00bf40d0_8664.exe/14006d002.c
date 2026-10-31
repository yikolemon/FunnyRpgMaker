/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d002 */

void FUN_14006d002(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_14006d02e((undefined4 *)(param_1 + 0x18));
  FUN_14006d02e((undefined4 *)(param_1 + 0x48));
  return;
}

