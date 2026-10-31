/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032987c */

uint FUN_14032987c(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0xffff0fff) - 0x20f < 8) {
    uVar1 = FUN_1403298a3();
    param_1 = param_1 | uVar1;
  }
  return param_1;
}

