/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ec43 */

void Unwind_1005ec43(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x343) = 1;
  if (*(char *)(unaff_EBP + -0x341) == '\x01') {
    FUN_10001134();
  }
  *(undefined1 *)(unaff_EBP + -0x343) = 1;
  return;
}

