/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042792 */

undefined4 * __thiscall FUN_10042792(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a4b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = spdlog::logger::vftable;
  local_34 = param_1 + 2;
  local_24 = param_1;
  FUN_1000334a(param_2 + 8);
  local_14 = 0;
  local_30 = local_24 + 8;
  local_24[8] = 0;
  local_24[9] = 0;
  local_24[10] = 0;
  FUN_10042356(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 3,param_2 + 0x20,
               param_2 + 0x24);
  local_14 = 1;
  puVar2 = (undefined4 *)FUN_10018d26(param_2 + 0x2c);
  puVar1 = local_24;
  local_24[0xb] = *puVar2;
  puVar2 = (undefined4 *)FUN_10018d26(param_2 + 0x30);
  puVar1[0xc] = *puVar2;
  local_2c = puVar1 + 0xe;
  FUN_1001860e(param_2 + 0x38);
  local_14 = 2;
  local_28 = local_24 + 0x18;
  FUN_10042904(param_2 + 0x60);
  ExceptionList = local_1c;
  return local_24;
}

