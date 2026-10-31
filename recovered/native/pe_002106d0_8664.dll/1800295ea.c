/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800295ea */

undefined4 FUN_1800295ea(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x199a & 0xffff;
  *param_1 = *param_1 * 0x199a >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x199a);
}

