/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499c40 */

uint FUN_00499c40(void)

{
  return *(uint *)(*(int *)((int)Self + 0x30) + 0x68) >> 8 & 0xffffff01;
}

