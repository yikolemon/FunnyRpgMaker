/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081c90 */

void Unwind_10081c90(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x18));
  }
  return;
}

