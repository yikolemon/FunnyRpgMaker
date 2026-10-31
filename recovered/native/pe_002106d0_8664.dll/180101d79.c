/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101d79 */

char * FUN_180101d79(uint param_1)

{
  if (param_1 < 0x3f) {
    return (&PTR_s_Text_1803611e2_0x13_1802de1b8)[param_1];
  }
  return "Unknown";
}

