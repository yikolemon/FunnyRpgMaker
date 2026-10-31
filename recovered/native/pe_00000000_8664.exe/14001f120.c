/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001f120 */

undefined4 FUN_14001f120(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x199a & 0xffff;
  *param_1 = *param_1 * 0x199a >> 0x10;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 0x199a);
}

