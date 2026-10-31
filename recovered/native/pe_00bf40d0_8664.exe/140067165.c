/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067165 */

longlong FUN_140067165(longlong param_1)

{
  return (ulonglong)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x1a) << 0x10;
}

