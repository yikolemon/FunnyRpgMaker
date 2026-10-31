/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2795 */

longlong FUN_1400d2795(longlong param_1)

{
  return (*(longlong *)(param_1 + 8) + 1) - (ulonglong)(*(char *)(param_1 + 0x10) == '\0');
}

