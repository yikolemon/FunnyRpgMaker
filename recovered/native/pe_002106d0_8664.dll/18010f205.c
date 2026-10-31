/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010f205 */

ulonglong FUN_18010f205(longlong param_1)

{
  undefined8 in_RAX;
  
  if (*(char *)(param_1 + 0x109) == '\x01') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x111)) ^ 1;
  }
  return 0;
}

