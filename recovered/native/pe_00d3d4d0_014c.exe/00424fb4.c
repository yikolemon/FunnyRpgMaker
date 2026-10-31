/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424fb4 */

undefined4 __cdecl FUN_00424fb4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}

