/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180219b29 */

longlong FUN_180219b29(longlong param_1)

{
  return (ulonglong)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x1a) << 0x10;
}

