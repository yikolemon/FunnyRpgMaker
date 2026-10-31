/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ed2b */

void Unwind_1005ed2b(void)

{
  byte bVar1;
  int unaff_EBP;
  int iVar2;
  
  bVar1 = (byte)*(undefined4 *)(unaff_EBP + -0x340) & 1;
  *(byte *)(unaff_EBP + -0x348) = bVar1;
  if (*(char *)(unaff_EBP + -0x344) == '\x01') {
    iVar2 = 0x30;
    do {
      FUN_10001134();
      iVar2 = iVar2 + -0x18;
    } while (iVar2 != -0x18);
  }
  *(byte *)(unaff_EBP + -0x348) = bVar1;
  return;
}

