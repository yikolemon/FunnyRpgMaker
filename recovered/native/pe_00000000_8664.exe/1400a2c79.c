/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a2c79 */

char * FUN_1400a2c79(uint param_1)

{
  if (2 < param_1) {
    return "Unknown";
  }
  return (&PTR_s_Mouse_140ec9ecc_0x12_140210ee0)[param_1];
}

