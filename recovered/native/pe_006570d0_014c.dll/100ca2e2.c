/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca2e2 */

void Unwind_100ca2e2(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x1c))(1);
  }
  return;
}

