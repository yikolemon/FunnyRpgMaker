/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101818c0 */

void Unwind_101818c0(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x24);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != piVar2);
    piVar2[9] = 0;
  }
  return;
}

