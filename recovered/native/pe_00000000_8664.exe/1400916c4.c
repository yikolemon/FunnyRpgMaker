/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400916c4 */

uint FUN_1400916c4(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffff0fff) - 0x20f < 8) {
    uVar1 = FUN_1400916eb();
    param_1 = param_1 | uVar1;
  }
  return param_1;
}

