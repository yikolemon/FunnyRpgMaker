/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdc8b */

undefined4 FUN_101bdc8b(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_101bd5e3();
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    FUN_101bdca4();
    return 1;
  }
  return 0;
}

