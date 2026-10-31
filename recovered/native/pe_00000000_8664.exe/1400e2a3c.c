/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2a3c */

uint FUN_1400e2a3c(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}

