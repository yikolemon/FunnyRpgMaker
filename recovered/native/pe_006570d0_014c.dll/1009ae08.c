/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009ae08 */

undefined4 *
FUN_1009ae08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_2c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c3ce0;
  local_14 = ExceptionList;
  local_2c = param_1;
  uStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  ExceptionList = &local_14;
  FUN_1009848c();
  *local_1c = Command::CommandSpecialClasses::SetVariable::vftable;
  ExceptionList = local_14;
  return local_1c;
}

