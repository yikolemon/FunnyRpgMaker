/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006bb9e */

undefined4 FUN_1006bb9e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_29c [24];
  undefined4 local_284;
  char local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_29c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2500;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1006bcf0(param_2,param_3);
  local_14 = 2;
  if (local_30 == '\x01') {
    FUN_1006bdd3(local_28,local_29c,&param_3);
    local_14 = 3;
    FUN_1002265a(local_28);
    local_14 = 0xffffffff;
    if (local_24 != (int *)0x0) {
      LOCK();
      piVar1 = local_24 + 1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_24)();
        LOCK();
        piVar1 = local_24 + 2;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_24 + 4))();
        }
      }
    }
  }
  local_14 = 0xffffffff;
  FUN_10228d00(local_284);
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return local_2c;
}

