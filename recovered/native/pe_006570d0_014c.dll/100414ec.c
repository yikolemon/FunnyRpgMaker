/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100414ec */

undefined4 * __thiscall FUN_100414ec(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a390;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  local_c = 0xffffffff;
  local_1c = param_1;
  ppuVar2 = &local_1c;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    ppuVar2 = (undefined4 **)local_18;
  }
  local_18 = (undefined1 *)ppuVar2;
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x28);
  }
  ExceptionList = local_14;
  return puVar1;
}

