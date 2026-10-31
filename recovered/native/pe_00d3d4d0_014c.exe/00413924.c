/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413924 */

void Unwind_00413924(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0xb8) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

