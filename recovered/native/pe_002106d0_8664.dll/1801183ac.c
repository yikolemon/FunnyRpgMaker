/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801183ac */

uint FUN_1801183ac(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffff0fff) - 0x20f < 8) {
    uVar1 = FUN_1801183d3();
    param_1 = param_1 | uVar1;
  }
  return param_1;
}

