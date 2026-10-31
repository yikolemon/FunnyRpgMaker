/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112545 */

void FUN_10112545(void)

{
  undefined1 uVar1;
  
  *(undefined1 *)(DAT_1039d74c + 0x20d9) = 0;
  FUN_10112734();
  uVar1 = 1;
  if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
    uVar1 = *(undefined1 *)(DAT_1039d74c + 0x209a);
  }
  *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar1;
  return;
}

