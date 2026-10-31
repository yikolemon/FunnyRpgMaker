/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800414ea */

undefined8 * FUN_1800414ea(undefined8 *param_1,undefined8 param_2,int param_3)

{
  BOOL BVar1;
  bool bVar2;
  DWORD local_50 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = spdlog::sinks::wincolor_sink<spdlog::details::console_mutex>::vftable;
  param_1[2] = param_2;
  param_1[3] = &DAT_1803ffe58;
  local_20 = param_1;
  local_28 = FUN_180239630(0xd8);
  FUN_180001e92(local_50,"\r\n");
  FUN_1800226be(local_28,0,local_50);
  local_30 = 0;
  local_20[5] = local_28;
  if (param_3 == 1) {
    BVar1 = GetConsoleMode((HANDLE)local_20[2],local_50);
    bVar2 = BVar1 != 0;
  }
  else {
    bVar2 = param_3 == 0;
  }
  *(bool *)(local_20 + 4) = bVar2;
  local_20[6] = 0xe000200030007;
  *(undefined4 *)(local_20 + 7) = 0x4f000c;
  *(undefined2 *)((longlong)local_20 + 0x3c) = 0;
  return local_20;
}

