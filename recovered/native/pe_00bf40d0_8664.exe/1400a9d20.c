/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9d20 */

uint FUN_1400a9d20(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

