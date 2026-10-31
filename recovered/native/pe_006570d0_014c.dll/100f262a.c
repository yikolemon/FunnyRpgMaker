/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f262a */

void FUN_100f262a(undefined4 param_1)

{
  undefined4 *local_30 [3];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5570;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = FUN_10228350(0x34);
  local_14 = 0;
  FUN_100f3440(param_1);
  *local_30[0] = local_24;
  ExceptionList = local_1c;
  return;
}

