/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015d284 */

void Unwind_1015d284(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x130);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x154));
    *(undefined4 *)(unaff_EBP + -0x130) = 0;
  }
  return;
}

