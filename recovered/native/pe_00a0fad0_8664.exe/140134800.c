/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134800 */

uint FUN_140134800(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}

