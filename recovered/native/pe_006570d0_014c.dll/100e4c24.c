/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4c24 */

void Unwind_100e4c24(void)

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

