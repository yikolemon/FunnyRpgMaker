/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a43d */

undefined4 FUN_1002a43d(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x290 & 0xffff;
  *param_1 = *param_1 * 0x290 >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x290);
}

