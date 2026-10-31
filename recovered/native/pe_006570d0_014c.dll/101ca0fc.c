/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ca0fc */

undefined4 FUN_101ca0fc(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 5;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
}

