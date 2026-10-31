/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000c4fa */

void Unwind_1000c4fa(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x1c))(1);
  }
  return;
}

