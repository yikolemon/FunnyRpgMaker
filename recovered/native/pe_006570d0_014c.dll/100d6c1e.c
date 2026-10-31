/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d6c1e */

undefined4 * __thiscall FUN_100d6c1e(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddea0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  local_24 = param_1 + 1;
  FUN_1001c078();
  local_14 = 1;
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  local_28 = param_1;
  FUN_1001bf04(puVar1,param_2[4] + (int)puVar1,param_3);
  ExceptionList = local_1c;
  return local_28;
}

