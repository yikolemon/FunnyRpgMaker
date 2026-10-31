/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9e3e */

undefined4 * __thiscall FUN_100b9e3e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c4be0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_14 = 0;
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_24 = param_1;
  FUN_100b9ece(param_2,*puVar1);
  ExceptionList = local_1c;
  return local_24;
}

