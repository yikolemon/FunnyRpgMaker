/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126518 */

uint FUN_140126518(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

