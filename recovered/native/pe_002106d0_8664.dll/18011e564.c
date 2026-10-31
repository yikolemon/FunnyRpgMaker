/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e564 */

longlong FUN_18011e564(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    param_1 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x98);
  }
  return param_1;
}

