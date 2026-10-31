/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ad700 */

uint FUN_1404ad700(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

