/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010378f */

bool FUN_1010378f(int param_1,float param_2)

{
  if (*(char *)(DAT_1039d74c + 0xec + param_1) != '\x01') {
    return false;
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_1039d74c + 0x90);
  }
  return param_2 * param_2 <= *(float *)(DAT_1039d74c + 0xbc4 + param_1 * 4);
}

