/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b9630 */

uint FUN_1401b9630(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

