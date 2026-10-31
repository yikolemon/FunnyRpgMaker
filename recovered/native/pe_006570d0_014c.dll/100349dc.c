/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100349dc */

void Unwind_100349dc(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x14))(1);
  }
  return;
}

