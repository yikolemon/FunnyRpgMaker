/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278a30 */

uint FUN_10278a30(void)

{
  return *(uint *)(*(int *)((int)Self + 0x30) + 0x68) >> 8 & 0xffffff01;
}

