/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081304 */

void Unwind_10081304(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x1c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x28) = 0;
  }
  return;
}

