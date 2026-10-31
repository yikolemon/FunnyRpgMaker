/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403206d5 */

ulonglong FUN_1403206d5(longlong param_1)

{
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 0x109) == '\x01') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x111)) ^ 1;
  }
  return 0;
}

