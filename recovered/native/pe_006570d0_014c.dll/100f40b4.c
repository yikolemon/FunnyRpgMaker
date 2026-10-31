/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f40b4 */

void Unwind_100f40b4(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0xdc));
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  }
  return;
}

