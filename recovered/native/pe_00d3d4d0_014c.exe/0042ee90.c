/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ee90 */

void Unwind_0042ee90(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + 0xd8) == '\x01') &&
     (piVar1 = *(int **)(unaff_EBP + 0xd4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0xb0));
    *(undefined4 *)(unaff_EBP + 0xd4) = 0;
  }
  return;
}

