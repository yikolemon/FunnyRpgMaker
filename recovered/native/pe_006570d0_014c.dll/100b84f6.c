/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b84f6 */

undefined4 * __thiscall FUN_100b84f6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c4b60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_24 = param_1;
  FUN_100b857c(param_2,*puVar1);
  ExceptionList = local_1c;
  return local_24;
}

