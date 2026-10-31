/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005871a */

void __fastcall FUN_1005871a(int param_1)

{
  undefined1 auStack_38 [20];
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_24 = &stack0xfffffffc;
  local_20 = auStack_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e40;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100145e4(auStack_38,param_1 + 4);
  local_14 = 0xffffffff;
  FUN_10013efc();
  ExceptionList = local_1c;
  return;
}

