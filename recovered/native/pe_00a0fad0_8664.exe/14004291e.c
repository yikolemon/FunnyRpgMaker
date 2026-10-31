/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004291e */

undefined8 * FUN_14004291e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}

