/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169215 */

longlong FUN_140169215(longlong param_1)

{
  return (ulonglong)*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x1a) << 0x10;
}

