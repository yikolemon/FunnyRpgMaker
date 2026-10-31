/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10037b1c */

void Unwind_10037b1c(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x14))(1);
  }
  return;
}

