/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004719d */

void Unwind_1004719d(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x1c))(1);
  }
  return;
}

