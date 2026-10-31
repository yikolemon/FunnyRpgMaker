/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013c8a */

void Unwind_10013c8a(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0xc4) + 0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0xbc));
    *(undefined4 *)(*(int *)(unaff_EBP + -0xc4) + 0x30) = 0;
  }
  return;
}

