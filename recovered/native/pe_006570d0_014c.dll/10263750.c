/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263750 */

bool FUN_10263750(byte param_1,uint param_2)

{
  if ((param_1 & 4) != 0) {
    return true;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return 0x7fffffff < param_2;
    }
    if (0x80000000 < param_2) {
      return true;
    }
  }
  return false;
}

