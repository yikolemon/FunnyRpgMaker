/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009319a */

float FUN_14009319a(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  return (*(float *)(lVar1 + 0x158) - *(float *)(lVar1 + 0x60)) + *(float *)(lVar1 + 0xd4);
}

