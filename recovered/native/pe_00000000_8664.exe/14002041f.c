/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002041f */

undefined4 FUN_14002041f(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x290 & 0xffff;
  *param_1 = *param_1 * 0x290 >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x290);
}

