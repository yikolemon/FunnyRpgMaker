/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c79a */

void __fastcall FUN_1006c79a(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *unaff_FS_OFFSET;
  undefined8 local_20;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_10 = &LAB_100c25d0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  piVar2 = *(int **)((int)param_1 + 4);
  local_20 = *param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  local_c = 0xffffffff;
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
        *unaff_FS_OFFSET = local_14;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}

