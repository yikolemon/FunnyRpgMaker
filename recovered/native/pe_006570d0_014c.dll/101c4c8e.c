/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4c8e */

undefined4 FUN_101c4c8e(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  if (puVar1 < *(undefined1 **)(param_1 + 0x24)) {
    *(undefined1 **)(param_1 + 0x20) = puVar1 + 1;
    return CONCAT31((int3)((uint)puVar1 >> 8),*puVar1);
  }
  return 0;
}

