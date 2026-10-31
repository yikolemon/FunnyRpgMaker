/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b7e3e */

void Unwind_100b7e3e(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    (*DAT_1039c964)(*piVar1);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  return;
}

