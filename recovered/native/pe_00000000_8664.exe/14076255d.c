/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076255d */

ulonglong FUN_14076255d(longlong param_1)

{
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 0xf9) == '\x01') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x101)) ^ 1;
  }
  return 0;
}

