/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b410 */

void FUN_1008b410(undefined4 param_1)

{
  undefined4 local_30;
  undefined4 local_2c [3];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c35c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (DAT_1039cbc8 == '\x01') {
    local_20 = (undefined1 *)&local_30;
    FUN_1008b922(local_2c);
    local_14 = 0;
    local_30 = 0xffffffff;
    FUN_1008bcec(local_2c,&local_30);
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  else {
    local_2c[0] = 0xffffffff;
    FUN_1008bcec(param_1,local_2c);
  }
  ExceptionList = local_1c;
  return;
}

