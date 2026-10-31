/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a8ee */

ulonglong FUN_18021a8ee(longlong param_1)

{
  return (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 3;
}

