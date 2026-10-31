/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022702 */

undefined8 * __thiscall FUN_10022702(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 local_24;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_14 = &LAB_100596e0;
  local_18 = ExceptionList;
  uVar3 = 0;
  ExceptionList = &local_18;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = param_2[1];
  }
  piVar1 = *(int **)((int)param_1 + 4);
  local_24 = *param_1;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((int)param_1 + 4) = uVar3;
  local_10 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    piVar2 = piVar1 + 1;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*piVar1)();
      LOCK();
      piVar2 = piVar1 + 2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
    }
  }
  ExceptionList = local_18;
  return param_1;
}

