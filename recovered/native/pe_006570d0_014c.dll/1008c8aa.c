/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c8aa */

undefined4 FUN_1008c8aa(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 local_38 [24];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3700;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10001f66(param_1);
  local_14 = 0;
  uVar1 = FUN_1008ca38(local_38);
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return uVar1;
}

