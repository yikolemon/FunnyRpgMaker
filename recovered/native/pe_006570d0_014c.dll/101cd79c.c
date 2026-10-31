/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cd79c */

void Unwind_101cd79c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  *(undefined1 *)(unaff_EBP + -0x13) = 1;
  return;
}

