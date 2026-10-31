/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007a6cc */

void Unwind_1007a6cc(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(**(int **)(unaff_EBP + -0x14) +
                    *(int *)(*(int *)**(int **)(unaff_EBP + -0x14) + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

