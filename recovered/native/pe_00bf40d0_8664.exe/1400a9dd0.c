/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a9dd0 */

void FUN_1400a9dd0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

