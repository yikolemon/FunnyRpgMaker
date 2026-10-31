/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033d082 */

undefined8 FUN_14033d082(void)

{
  undefined1 *puVar1;
  
  if (*(longlong *)(DAT_14062a630 + 0x24f8) == 0) {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10e);
  }
  else {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_14062a630 + 0x24f8) + 0x24c);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
}

