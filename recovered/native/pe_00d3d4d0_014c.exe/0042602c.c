/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042602c */

void Unwind_0042602c(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x13);
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  if (((*(char *)(unaff_EBP + -0x19) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x94) == '\x01')) &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x90), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x30));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  return;
}

