/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef5a0 */

void Unwind_100ef5a0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xf8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x11c));
    *(undefined4 *)(unaff_EBP + -0xf8) = 0;
  }
  return;
}

