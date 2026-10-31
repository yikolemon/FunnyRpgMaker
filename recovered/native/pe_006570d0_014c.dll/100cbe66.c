/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cbe66 */

void Unwind_100cbe66(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  piVar2 = *(int **)(iVar1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x18));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  return;
}

