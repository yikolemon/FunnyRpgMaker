/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10040dfa */

undefined4 * __thiscall FUN_10040dfa(undefined4 *param_1,int param_2)

{
  DWORD DVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  bool bVar4;
  DWORD local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a340;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar2 = GetStdHandle(0xfffffff5);
  param_1[1] = 0;
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  param_1[2] = pvVar2;
  param_1[3] = &DAT_10386760;
  FUN_10041404(&local_28);
  DVar1 = local_28;
  local_28 = 0;
  param_1[5] = DVar1;
  local_14 = 1;
  local_24 = param_1;
  if (param_2 == 1) {
    BVar3 = GetConsoleMode((HANDLE)param_1[2],&local_28);
    bVar4 = BVar3 != 0;
  }
  else {
    bVar4 = param_2 == 0;
  }
  *(bool *)(local_24 + 4) = bVar4;
  *(undefined8 *)(local_24 + 6) = DAT_1028f6e0;
  local_24[8] = 0x4f000c;
  *(undefined2 *)(local_24 + 9) = 0;
  *local_24 = spdlog::sinks::wincolor_stdout_sink<spdlog::details::console_mutex>::vftable;
  ExceptionList = local_1c;
  return local_24;
}

