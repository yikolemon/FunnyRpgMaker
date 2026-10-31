/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100145e4 */

undefined4 FUN_100145e4(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_60 [48];
  char local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_10058d80;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10012f38(auStack_60,param_2);
  local_18 = 0;
  if (local_30 == '\x01') {
    FUN_10013db4(auStack_60);
  }
  else {
    FUN_10014148(9);
  }
  local_18 = 0xffffffff;
  FUN_10014684();
  ExceptionList = local_20;
  return param_1;
}

