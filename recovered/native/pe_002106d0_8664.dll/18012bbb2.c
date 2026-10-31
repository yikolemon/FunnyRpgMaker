/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012bbb2 */

undefined8 FUN_18012bbb2(void)

{
  undefined1 *puVar1;
  
  if (*(longlong *)(DAT_180419160 + 0x24f8) == 0) {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e);
  }
  else {
    puVar1 = (undefined1 *)(*(longlong *)(DAT_180419160 + 0x24f8) + 0x24c);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1);
}

