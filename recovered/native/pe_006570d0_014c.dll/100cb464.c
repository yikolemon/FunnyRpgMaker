/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb464 */

void Unwind_100cb464(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x51);
  *(undefined1 *)(unaff_EBP + -0x52) = uVar1;
  piVar2 = *(int **)(unaff_EBP + -0x18);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(unaff_EBP + -0x3c));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x52) = uVar1;
  return;
}

