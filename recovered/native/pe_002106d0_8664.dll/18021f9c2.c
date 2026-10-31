/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021f9c2 */

void FUN_18021f9c2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_18021f9ee(param_1 + 0x18);
  FUN_18021f9ee(param_1 + 0x48);
  return;
}

