/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405066 */

void Unwind_00405066(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(**(int **)(unaff_EBP + -0x14) +
                    *(int *)(*(int *)**(int **)(unaff_EBP + -0x14) + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

