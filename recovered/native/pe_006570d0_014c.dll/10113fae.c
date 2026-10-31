/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113fae */

bool FUN_10113fae(int param_1,float param_2)

{
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_1039d74c + 0x90);
  }
  return param_2 * param_2 <= *(float *)(DAT_1039d74c + 0xbc4 + param_1 * 4);
}

