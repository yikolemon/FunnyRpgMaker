/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008772e */

undefined4 * __fastcall FUN_1008772e(undefined4 *param_1)

{
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_100c3350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_8 = 0;
  local_1c = param_1 + 6;
  local_18 = param_1;
  FUN_10080804(0);
  ExceptionList = local_10;
  return local_18;
}

