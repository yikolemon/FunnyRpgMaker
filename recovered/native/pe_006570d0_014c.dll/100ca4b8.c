/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca4b8 */

void Unwind_100ca4b8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x1c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x74) = 0;
  }
  return;
}

