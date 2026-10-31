/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090546 */

void FUN_140090546(void)

{
  undefined1 uVar1;
  
  *(undefined1 *)(DAT_140f2a910 + 0x22a1) = 0;
  FUN_140090768();
  uVar1 = 1;
  if (*(char *)(DAT_140f2a910 + 0x22a1) == '\0') {
    uVar1 = *(undefined1 *)(DAT_140f2a910 + 0x2262);
  }
  *(undefined1 *)(DAT_140f2a910 + 0x2261) = uVar1;
  return;
}

