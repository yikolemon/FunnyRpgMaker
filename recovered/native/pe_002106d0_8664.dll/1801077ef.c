/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801077ef */

uint FUN_1801077ef(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xfffe3fff;
  if ((param_1 & 0x1c000) == 0) {
    uVar1 = param_2;
  }
  return uVar1 | param_1;
}

