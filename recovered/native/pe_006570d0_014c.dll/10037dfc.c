/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10037dfc */

void Unwind_10037dfc(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x18))(1);
  }
  return;
}

