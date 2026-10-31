/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b96e0 */

void FUN_1401b96e0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

