/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002265a */

undefined8 * __thiscall FUN_1002265a(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100596d0;
  local_1c = ExceptionList;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  ExceptionList = &local_1c;
  *param_2 = 0;
  param_2[1] = 0;
  piVar4 = *(int **)((int)param_1 + 4);
  local_28 = *param_1;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)((int)param_1 + 4) = uVar3;
  local_14 = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*piVar4)();
      LOCK();
      piVar1 = piVar4 + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*piVar4 + 4))();
      }
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

