/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403286fe */

void FUN_1403286fe(void)

{
  undefined1 uVar1;
  
  *(undefined1 *)(DAT_14062a630 + 0x22a1) = 0;
  FUN_140328920();
  uVar1 = 1;
  if (*(char *)(DAT_14062a630 + 0x22a1) == '\0') {
    uVar1 = *(undefined1 *)(DAT_14062a630 + 0x2262);
  }
  *(undefined1 *)(DAT_14062a630 + 0x2261) = uVar1;
  return;
}

