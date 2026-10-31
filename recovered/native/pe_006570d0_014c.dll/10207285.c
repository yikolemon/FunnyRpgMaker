/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207285 */

uint FUN_10207285(uint param_1)

{
  param_1 = param_1 << 0xd ^ param_1;
  param_1 = param_1 >> 0x11 ^ param_1;
  return param_1 << 5 ^ param_1;
}

