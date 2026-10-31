/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4f3e */

void Unwind_100f4f3e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x14))(1);
  }
  return;
}

