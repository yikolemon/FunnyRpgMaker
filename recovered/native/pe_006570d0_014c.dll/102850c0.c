/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102850c0 */

void FUN_102850c0(uint param_1)

{
  param_1 = param_1 >> 0x18;
  if (0 < DAT_1039d7b4) {
    MXCSR = MXCSR & 0xffffffc0 |
            -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 |
            -(uint)((param_1 & 4) != 0) & 8 | -(uint)((param_1 & 8) != 0) & 4 |
            (uint)((param_1 & 0x10) != 0) | -(uint)((param_1 & 0x20) != 0) & 2;
  }
  return;
}

