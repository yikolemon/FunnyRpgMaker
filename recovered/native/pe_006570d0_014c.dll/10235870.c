/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235870 */

void __fastcall FUN_10235870(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      (*(code *)PTR_guard_check_icall_1035d810)();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        (*(code *)PTR_guard_check_icall_1035d810)();
        (*pcVar3)();
      }
    }
  }
  return;
}

