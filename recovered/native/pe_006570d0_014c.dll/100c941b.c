/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c941b */

void FUN_100c941b(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_c8 [160];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_c8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100cc320;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100c94c2();
  local_18 = 0;
  FUN_100c9542(param_2,0,auStack_c8);
  local_18 = 0xffffffff;
  FUN_100c96fc();
  ExceptionList = local_20;
  return;
}

