/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cb580 */

void Unwind_101cb580(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1a);
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  if (((*(char *)(unaff_EBP + -0x1b) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0xc4) == '\x01')) &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc0), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x34));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xc0) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  return;
}

