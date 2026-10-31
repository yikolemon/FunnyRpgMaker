/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008feed */

undefined8 FUN_14008feed(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x1608) + 800);
}

