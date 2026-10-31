/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c230 */

uint FUN_18029c230(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}

