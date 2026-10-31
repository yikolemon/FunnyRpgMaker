/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002175f */

void Unwind_1002175f(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x48) == '\x01') {
    FUN_1022c200(*(undefined4 *)(unaff_EBP + -0x4c));
  }
  return;
}

