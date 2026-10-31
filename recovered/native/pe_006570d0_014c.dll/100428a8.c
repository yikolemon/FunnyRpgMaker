/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100428a8 */

void Unwind_100428a8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x1c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x5c) = 0;
  }
  return;
}

