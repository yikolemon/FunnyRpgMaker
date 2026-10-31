/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b458c */

uint FUN_1401b458c(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

