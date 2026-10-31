/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011aa50 */

undefined4 FUN_14011aa50(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}

