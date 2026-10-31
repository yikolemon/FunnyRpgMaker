/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00417c24 */

void Unwind_00417c24(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + -0x1c))(1);
  }
  return;
}

