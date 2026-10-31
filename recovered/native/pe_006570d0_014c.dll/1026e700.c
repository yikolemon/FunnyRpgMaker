/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e700 */

undefined4 FUN_1026e700(int param_1,uint param_2)

{
  if (param_1 == 0) {
    if (param_2 == 0x7ff00000) {
      return 1;
    }
    if (param_2 == 0xfff00000) {
      return 2;
    }
  }
  if ((param_2 & 0x7ff80000) == 0x7ff80000) {
    return 3;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) &&
     ((param_1 != 0 || ((param_2 & 0x7fffffff) != 0x7ff00000)))) {
    return 4;
  }
  return 0;
}

