/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004befa */

void Unwind_1004befa(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x18));
  }
  return;
}

