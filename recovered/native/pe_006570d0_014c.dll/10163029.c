/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10163029 */

void FUN_10163029(int param_1,int param_2)

{
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x66 + param_2 * 0x74) == '\x01') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + param_2 * 0x74 + 0x70) = 1;
    *(short *)(param_1 + 0x1c4) = (short)param_2;
  }
  return;
}

