/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013d2e */

void FUN_10013d2e(undefined4 param_1)

{
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  local_14 = &LAB_10058eb0;
  local_18 = ExceptionList;
  uStack_24 = param_1;
  local_1c = auStack_38;
  local_20 = auStack_38;
  ExceptionList = &local_18;
  FUN_10001f66(param_1);
  local_10 = 0xffffffff;
  FUN_10055d48();
  ExceptionList = local_18;
  return;
}

