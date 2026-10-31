/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5ebc */

uint FUN_1400a5ebc(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

