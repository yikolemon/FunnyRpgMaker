/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d0a6c */

void Unwind_101d0a6c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if (((*(char *)(unaff_EBP + -0x1d) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x11c) == '\x01')) &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x118), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x30));
  }
  return;
}

