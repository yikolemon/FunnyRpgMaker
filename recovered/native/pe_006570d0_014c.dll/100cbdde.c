/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cbdde */

undefined4 * __thiscall FUN_100cbdde(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100cc560;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *param_1 = *param_2;
  local_24 = param_1 + 2;
  local_20 = param_1;
  FUN_1001860e(param_2 + 2);
  *(undefined8 *)(local_20 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  ExceptionList = local_18;
  return local_20;
}

