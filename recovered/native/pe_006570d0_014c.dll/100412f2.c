/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100412f2 */

void Unwind_100412f2(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x20))(1);
  }
  return;
}

