/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a4ae2 */

undefined8 FUN_1400a4ae2(void)

{
  undefined1 *puVar1;
  
  if (*(longlong *)(DAT_140f2a910 + 0x24f8) == 0) {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e);
  }
  else {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x24f8) + 0x24c);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
}

