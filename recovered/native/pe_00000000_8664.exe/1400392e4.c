/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400392e4 */

void FUN_1400392e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140039311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
    }
  }
  return;
}

