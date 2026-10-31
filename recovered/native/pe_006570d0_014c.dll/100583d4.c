/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100583d4 */

undefined4 FUN_100583d4(undefined4 param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005ad80;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = FUN_10228350(0x18);
  local_14 = 0;
  local_24 = local_28;
  FUN_10001f66(param_1);
  ExceptionList = local_1c;
  return local_28;
}

