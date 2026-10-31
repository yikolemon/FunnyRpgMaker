/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081b52 */

void Unwind_10081b52(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  piVar2 = (int *)piVar1[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != piVar1);
    piVar1[9] = 0;
  }
  return;
}

