/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e108d */

void Unwind_100e108d(void)

{
  char cVar1;
  int *piVar2;
  int unaff_EBP;
  
  cVar1 = *(char *)(unaff_EBP + -0x616a);
  *(char *)(unaff_EBP + -0x6169) = cVar1;
  if ((cVar1 == '\x01') &&
     (piVar2 = *(int **)(*(int *)(unaff_EBP + -0x6160) + 0x2c), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != *(int **)(unaff_EBP + -0x60e4));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x6160) + 0x2c) = 0;
  }
  *(char *)(unaff_EBP + -0x6169) = cVar1;
  return;
}

