/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007cdda */

void Unwind_1007cdda(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

