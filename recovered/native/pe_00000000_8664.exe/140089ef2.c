/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140089ef2 */

undefined1 FUN_140089ef2(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140089eb2();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(DAT_140f2a910 + 0x16b4);
  }
  return uVar2;
}

