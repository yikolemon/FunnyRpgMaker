/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d6684 */

void Unwind_101d6684(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 100);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 100) = 0;
  }
  return;
}

