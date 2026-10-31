/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100033d0 */

undefined4 * __thiscall FUN_100033d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_2c;
  undefined1 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_2c;
  local_10 = 0xffffffff;
  local_14 = &LAB_100050e0;
  local_18 = ExceptionList;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  ExceptionList = &local_18;
  *param_1 = std::exception::vftable;
  local_24 = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_28 = 1;
  local_2c = param_2;
  local_20 = param_1;
  FUN_10258fb0(&local_2c,local_24);
  *local_20 = std::runtime_error::vftable;
  ExceptionList = local_18;
  return local_20;
}

