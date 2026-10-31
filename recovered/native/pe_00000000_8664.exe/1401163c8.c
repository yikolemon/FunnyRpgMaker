/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401163c8 */

undefined4 FUN_1401163c8(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xc);
  }
  return 0;
}

