/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100df254 */

void Unwind_100df254(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + -0xa5) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0xa0) + 0x2c), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x70));
    *(undefined4 *)(*(int *)(unaff_EBP + -0xa0) + 0x2c) = 0;
  }
  return;
}

