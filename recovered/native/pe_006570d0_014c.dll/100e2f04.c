/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e2f04 */

void __fastcall FUN_100e2f04(undefined4 param_1,undefined4 *param_2)

{
  undefined1 auStack_d8 [80];
  int local_88;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_d8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ea870;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1007eb1c(param_1,2,0x40,1);
  local_18 = 0;
  if (local_88 != 0) {
    FUN_1007e6c8(*param_2,param_2[1],0);
  }
  local_18 = 0xffffffff;
  FUN_1007eba6();
  ExceptionList = local_20;
  return;
}

