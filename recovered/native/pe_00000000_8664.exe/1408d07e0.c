/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d07e0 */

int FUN_1408d07e0(byte param_1)

{
  int in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return in_EAX << (param_1 & 0x1f);
  }
  return 0;
}

