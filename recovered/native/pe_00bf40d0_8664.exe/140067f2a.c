/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067f2a */

ulonglong FUN_140067f2a(longlong param_1)

{
  return (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 3;
}

