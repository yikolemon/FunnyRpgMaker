/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018a9e */

void Unwind_10018a9e(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

