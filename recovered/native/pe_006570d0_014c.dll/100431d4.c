/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100431d4 */

void __fastcall FUN_100431d4(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x100431f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}

