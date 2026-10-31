/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8b71 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100c8b71(undefined4 param_1,undefined4 param_2)

{
  undefined8 local_30;
  undefined4 **local_28;
  undefined1 *local_24;
  undefined4 **local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = &local_28;
  local_18 = &LAB_100cc2a0;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039c928) {
    local_30 = 0x1039c928100c8c35;
    FUN_1022c0d0();
    if (DAT_1039c928 == -1) {
      local_14 = 1;
      local_30 = CONCAT44(0x100c8c53,(undefined4)local_30);
      FUN_10021a06();
      local_30 = 0x1002210b100c8c5e;
      FUN_1022c3a0();
      local_14 = 0xffffffff;
      local_30 = 0x1039c928100c8c73;
      FUN_1022c180();
    }
  }
  local_28 = &local_28;
  local_20 = (undefined4 **)&local_30;
  local_24 = (undefined1 *)&local_30;
  local_30 = CONCAT44(param_2,param_1);
  local_14 = 0;
  FUN_100c8f90();
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_28[-1] = (undefined4 *)0x100c8c19;
  FUN_100431d4();
  ExceptionList = local_1c;
  return;
}

