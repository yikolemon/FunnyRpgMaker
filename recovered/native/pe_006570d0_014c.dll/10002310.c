/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002310 */

undefined4 * FUN_10002310(undefined4 *param_1,undefined4 param_2)

{
  HLOCAL local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_10004ff0;
  local_1c = ExceptionList;
  local_28 = (HLOCAL)0x0;
  ExceptionList = &local_1c;
  local_24 = FUN_1022b800(param_2,&local_28);
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_24 == 0 || local_28 == (HLOCAL)0x0) {
    param_1[4] = 0xd;
    param_1[5] = 0xf;
    *param_1 = 0x6e6b6e75;
    param_1[1] = 0x206e776f;
    param_1[2] = 0x6f727265;
    *(undefined1 *)(param_1 + 3) = 0x72;
  }
  else {
    local_14 = 0;
    FUN_1000254c(local_28,local_24);
  }
  local_14 = 0xffffffff;
  LocalFree(local_28);
  ExceptionList = local_1c;
  return param_1;
}

