/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100967e2 */

void Unwind_100967e2(void)

{
  int unaff_EBP;
  int iVar1;
  
  if (*(char *)(unaff_EBP + -0x15) == '\0') {
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    do {
      iVar1 = iVar1 + -0x18;
      FUN_10001134();
    } while (iVar1 != 0xac);
  }
  return;
}

