/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a302e */

undefined4 * FUN_100a302e(undefined4 *param_1)

{
  int local_2c;
  undefined4 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100c40c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 7;
  local_14 = 0;
  FUN_100a30c4(&local_2c);
  if (local_2c != 0) {
    FUN_10004664(local_2c,local_28);
  }
  ExceptionList = local_1c;
  return param_1;
}

