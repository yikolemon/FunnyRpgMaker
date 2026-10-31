/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100415b6 */

void __fastcall FUN_100415b6(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1005a3a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  local_8 = 0xffffffff;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    local_18 = param_1;
    (*(code *)**(undefined4 **)param_1[5])(1);
  }
  ExceptionList = local_10;
  return;
}

