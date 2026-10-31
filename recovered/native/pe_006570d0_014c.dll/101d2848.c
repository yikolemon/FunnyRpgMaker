/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d2848 */

void Unwind_101d2848(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1b);
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  if (((*(char *)(unaff_EBP + -0x1c) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x94) == '\x01')) &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x90), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x2c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

