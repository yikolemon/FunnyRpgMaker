/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c250 */

uint FUN_18029c250(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_180416764 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVar1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVar1;
}

