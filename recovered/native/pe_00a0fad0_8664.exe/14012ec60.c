/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012ec60 */

void FUN_14012ec60(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

