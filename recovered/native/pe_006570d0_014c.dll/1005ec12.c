/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ec12 */

void Unwind_1005ec12(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x341) = 1;
  if (*(char *)(unaff_EBP + -0x321) == '\x01') {
    FUN_1006dc58();
  }
  *(undefined1 *)(unaff_EBP + -0x341) = 1;
  return;
}

