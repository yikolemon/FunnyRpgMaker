/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002a8e9 */

undefined4 FUN_18002a8e9(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x290 & 0xffff;
  *param_1 = *param_1 * 0x290 >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x290);
}

