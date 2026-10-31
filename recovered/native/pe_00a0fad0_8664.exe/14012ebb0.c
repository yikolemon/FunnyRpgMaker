/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012ebb0 */

uint FUN_14012ebb0(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

