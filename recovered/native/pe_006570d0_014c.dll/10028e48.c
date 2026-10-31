/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10028e48 */

undefined4 FUN_10028e48(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x199a & 0xffff;
  *param_1 = *param_1 * 0x199a >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x199a);
}

