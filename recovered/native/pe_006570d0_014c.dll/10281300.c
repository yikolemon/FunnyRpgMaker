/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10281300 */

void FUN_10281300(uint param_1)

{
  if (0 < DAT_1039d7b4) {
    if (((param_1 & 0x40) != 0) && (DAT_1039bce0 != 0)) {
      MXCSR = param_1;
      return;
    }
    MXCSR = param_1 & 0xffffffbf;
  }
  return;
}

