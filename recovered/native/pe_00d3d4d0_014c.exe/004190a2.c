/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004190a2 */

void __fastcall FUN_004190a2(int param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004190c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 4))();
        return;
      }
    }
  }
  return;
}

