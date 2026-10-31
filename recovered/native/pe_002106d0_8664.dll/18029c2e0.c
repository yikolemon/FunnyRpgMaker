/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c2e0 */

void FUN_18029c2e0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}

