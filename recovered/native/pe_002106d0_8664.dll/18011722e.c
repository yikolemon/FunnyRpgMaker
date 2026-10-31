/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011722e */

void FUN_18011722e(void)

{
  undefined1 uVar1;
  
  *(undefined1 *)(DAT_180419160 + 0x22a1) = 0;
  FUN_180117450();
  uVar1 = 1;
  if (*(char *)(DAT_180419160 + 0x22a1) == '\0') {
    uVar1 = *(undefined1 *)(DAT_180419160 + 0x2262);
  }
  *(undefined1 *)(DAT_180419160 + 0x2261) = uVar1;
  return;
}

