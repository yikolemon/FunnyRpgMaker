/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400931be */

float FUN_1400931be(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  return (*(float *)(lVar1 + 0x15c) - *(float *)(lVar1 + 100)) + *(float *)(lVar1 + 0xd8);
}

