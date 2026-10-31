/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125c81 */

undefined4 FUN_10125c81(void)

{
  undefined1 *puVar1;
  
  if (*(int *)(DAT_1039d74c + 0x2308) == 0) {
    puVar1 = (undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe);
  }
  else {
    puVar1 = (undefined1 *)(*(int *)(DAT_1039d74c + 0x2308) + 0x200);
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),*puVar1);
}

