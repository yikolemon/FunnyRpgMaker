/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296a50 */

uint FUN_180296a50(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}

