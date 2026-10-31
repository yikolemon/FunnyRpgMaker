/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d67e2 */

void Unwind_101d67e2(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(unaff_EBP + 0x130) == '\x01') &&
     (piVar1 = *(int **)(unaff_EBP + 300), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x108));
  }
  return;
}

