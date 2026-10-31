/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b170 */

void Unwind_1007b170(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

