/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140322179 */

void FUN_140322179(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(undefined2 *)(DAT_14062a630 + 0x22a0) = 0;
  *(undefined1 *)(lVar1 + 0x2261) = *(undefined1 *)(lVar1 + 0x2262);
  return;
}

