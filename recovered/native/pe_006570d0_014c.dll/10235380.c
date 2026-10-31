/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235380 */

int FUN_10235380(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    param_1 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      (*(code *)PTR_guard_check_icall_1035d810)();
      param_1 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        param_1 = (*pcVar4)();
      }
    }
  }
  return param_1;
}

