/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400633ff */

uint FUN_1400633ff(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 << 0xd ^ param_1;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  return uVar1 << 5 ^ uVar1;
}

