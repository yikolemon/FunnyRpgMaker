/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019b47c */

undefined8 FUN_14019b47c(byte param_1,ulonglong param_2)

{
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    if (0x8000000000000000 < param_2) {
      return 1;
    }
  }
  return 0;
}

