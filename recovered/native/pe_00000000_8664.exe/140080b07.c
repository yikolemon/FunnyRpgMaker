/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080b07 */

uint FUN_140080b07(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xfffe3fff;
  if ((param_1 & 0x1c000) == 0) {
    uVar1 = param_2;
  }
  return uVar1 | param_1;
}

