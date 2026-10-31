/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101135c0 */

uint FUN_101135c0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffff0fff) - 0x20f < 8) {
    uVar1 = FUN_101135e3();
    param_1 = param_1 | uVar1;
  }
  return param_1;
}

