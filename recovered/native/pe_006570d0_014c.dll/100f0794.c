/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0794 */

void Unwind_100f0794(void)

{
  int unaff_EBP;
  
  if ((undefined4 *)**(int **)(unaff_EBP + -0x14) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(unaff_EBP + -0x14))(1);
  }
  return;
}

