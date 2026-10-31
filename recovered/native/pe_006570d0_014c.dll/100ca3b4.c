/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca3b4 */

void Unwind_100ca3b4(void)

{
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBP + 8))(1);
  }
  return;
}

