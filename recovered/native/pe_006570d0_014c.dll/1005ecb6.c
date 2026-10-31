/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ecb6 */

void Unwind_1005ecb6(void)

{
  byte bVar1;
  int unaff_EBP;
  
  bVar1 = (byte)*(undefined4 *)(unaff_EBP + -0x340) & 1;
  *(byte *)(unaff_EBP + -0x344) = bVar1;
  if (*(char *)(unaff_EBP + -0x32f) == '\x01') {
    FUN_1006dc58();
  }
  *(byte *)(unaff_EBP + -0x344) = bVar1;
  return;
}

