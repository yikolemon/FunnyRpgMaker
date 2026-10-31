/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d5f0 */

void Unwind_1007d5f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -100) + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

