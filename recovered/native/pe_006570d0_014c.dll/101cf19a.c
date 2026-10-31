/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cf19a */

void Unwind_101cf19a(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x11);
  *(undefined1 *)(unaff_EBP + -0x1d) = uVar1;
  if (((*(char *)(unaff_EBP + -0x12) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0xc4) == '\x01')) &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xc0), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x44));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xc0) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1d) = uVar1;
  return;
}

