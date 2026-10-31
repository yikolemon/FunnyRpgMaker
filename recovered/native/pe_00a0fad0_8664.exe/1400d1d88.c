/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d1d88 */

undefined8 FUN_1400d1d88(int param_1)

{
  if (param_1 < 0x7ffc) {
    if ((0x12 < param_1 - 0x3a4U) || ((0x60011U >> (param_1 - 0x3a4U & 0x1f) & 1) == 0)) {
      if (param_1 - 0x4b0U < 2) {
        return 2;
      }
      if (param_1 != 0x4e4) {
        return 0xffffffff;
      }
    }
  }
  else if (1 < param_1 - 0x7ffcU) {
    if (param_1 - 0x7ffeU < 2) {
      return 4;
    }
    if (param_1 != 0xfde9) {
      return 0xffffffff;
    }
  }
  return 1;
}

