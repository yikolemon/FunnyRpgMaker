/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ad7b0 */

void FUN_1404ad7b0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

