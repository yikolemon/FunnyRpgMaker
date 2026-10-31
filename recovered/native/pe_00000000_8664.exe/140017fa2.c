/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140017fa2 */

undefined8 * FUN_140017fa2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_2[1] == 0) {
    uVar4 = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar4 = param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_1;
}

