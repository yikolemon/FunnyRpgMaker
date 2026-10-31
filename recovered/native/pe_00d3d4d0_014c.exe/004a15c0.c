/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a15c0 */

void __cdecl FUN_004a15c0(uint param_1)

{
  if (0 < DAT_0051bfb0) {
    if (((param_1 & 0x40) != 0) && (DAT_0051b750 != 0)) {
      MXCSR = param_1;
      return;
    }
    MXCSR = param_1 & 0xffffffbf;
  }
  return;
}

