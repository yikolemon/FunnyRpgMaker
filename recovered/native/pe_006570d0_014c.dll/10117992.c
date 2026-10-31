/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117992 */

bool FUN_10117992(int param_1)

{
  if ((*(char *)(param_1 + 0xfa) == '\x01') && (param_1 == *(int *)(param_1 + 0x3a8))) {
    return (*(byte *)(param_1 + 0xe) & 2) == 0;
  }
  return false;
}

