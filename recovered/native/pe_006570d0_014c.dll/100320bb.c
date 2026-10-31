/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100320bb */

void Unwind_100320bb(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x240) != unaff_EBP + -0x230) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x240));
  }
  return;
}

