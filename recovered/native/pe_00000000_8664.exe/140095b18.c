/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095b18 */

bool FUN_140095b18(longlong param_1)

{
  if ((*(char *)(param_1 + 0x10a) == '\x01') && (param_1 == *(longlong *)(param_1 + 0x418))) {
    return (*(byte *)(param_1 + 0x16) & 2) == 0;
  }
  return false;
}

