/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169fda */

ulonglong FUN_140169fda(longlong param_1)

{
  return (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) >> 3;
}

