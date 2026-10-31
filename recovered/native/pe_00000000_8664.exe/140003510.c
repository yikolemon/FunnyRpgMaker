/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003510 */

longlong FUN_140003510(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    return *(longlong *)(param_1 + 0x68);
  }
  return param_1 + 0x68;
}

