/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0a92 */

void FUN_101c0a92(int param_1)

{
  uint *puVar1;
  
  if ((*(int *)(param_1 + 0x9c) == 0) || ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    FUN_101c0017(*(undefined4 *)(*(int *)(param_1 + 4) + 100),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

