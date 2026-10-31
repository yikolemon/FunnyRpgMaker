/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9cbc */

void __fastcall FUN_100c9cbc(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100cc380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = spdlog::sinks::base_sink<std::mutex>::vftable;
  local_8 = 0xffffffff;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    local_18 = param_1;
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  ExceptionList = local_10;
  return;
}

