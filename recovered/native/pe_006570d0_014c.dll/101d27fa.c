/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d27fa */

void Unwind_101d27fa(void)

{
  undefined1 uVar1;
  int *piVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x19);
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  if ((*(char *)(unaff_EBP + -0x1a) == '\x01') &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 100), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x28));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  return;
}

