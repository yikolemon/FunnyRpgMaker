/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9684 */

void Unwind_100c9684(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x14))(1);
  }
  return;
}

