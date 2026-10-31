/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089fc1 */

void FUN_140089fc1(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(undefined2 *)(DAT_140f2a910 + 0x22a0) = 0;
  *(undefined1 *)(lVar1 + 0x2261) = *(undefined1 *)(lVar1 + 0x2262);
  return;
}

