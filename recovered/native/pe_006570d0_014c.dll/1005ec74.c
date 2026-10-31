/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ec74 */

void Unwind_1005ec74(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x310);
  *(undefined1 *)(unaff_EBP + -0x348) = 1;
  if (unaff_EBP + -0x1c4 != iVar1 && (*(byte *)(unaff_EBP + -0x345) & 1) == 0) {
    do {
      iVar1 = iVar1 + -0x18;
      FUN_10001134();
    } while (iVar1 != unaff_EBP + -0x1c4);
  }
  *(undefined1 *)(unaff_EBP + -0x348) = 1;
  return;
}

