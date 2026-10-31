/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006f6d8 */

undefined4 * __thiscall FUN_1006f6d8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_100c2770;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = std::exception::vftable;
  local_2c = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_14 = 0;
  *param_1 = WolfRPGException::vftable;
  local_28 = param_1 + 3;
  local_24 = param_1;
  FUN_1000334a(param_2);
  ExceptionList = local_1c;
  return local_24;
}

