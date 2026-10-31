/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0a6c */

undefined4 * __thiscall FUN_100f0a6c(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100f53c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = 0;
  local_2c = param_1 + 2;
  local_24 = param_1;
  FUN_100f0d90();
  local_14 = 1;
  local_28 = *local_2c;
  if (local_28 != 0) {
    piVar1 = (int *)FUN_10018d26(local_28);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_14 = 2;
  FUN_100f0e20(param_2,&local_28);
  local_14 = 0xffffffff;
  FUN_100f0f14();
  ExceptionList = local_1c;
  return local_24;
}

