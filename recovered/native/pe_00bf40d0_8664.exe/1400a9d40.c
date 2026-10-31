/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9d40 */

uint FUN_1400a9d40(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_14013c4a4 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVar1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVar1;
}

