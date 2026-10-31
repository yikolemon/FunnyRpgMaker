/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140097820 */

longlong FUN_140097820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    param_1 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x98);
  }
  return param_1;
}

