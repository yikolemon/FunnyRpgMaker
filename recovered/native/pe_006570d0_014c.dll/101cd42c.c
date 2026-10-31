/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cd42c */

void Unwind_101cd42c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  return;
}

