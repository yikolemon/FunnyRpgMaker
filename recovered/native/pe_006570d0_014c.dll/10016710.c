/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016710 */

void Unwind_10016710(void)

{
  int unaff_EBP;
  
  if (*(char *)(*(int *)(unaff_EBP + -0x14) + 0x28) == '\x01') {
    FUN_10001fee();
  }
  return;
}

