/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004f02a */

void Unwind_1004f02a(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + 0x38));
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  return;
}

