/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005f565 */

void Unwind_1005f565(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x298);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*piVar2)();
      LOCK();
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  return;
}

