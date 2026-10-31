/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003e9dc */

void FUN_1003e9dc(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_1005a2e0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0x18);
  puVar1[3] = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(puVar1 + 1) = *param_2;
  local_c = 0xffffffff;
  *puVar1 = spdlog::details::
            elapsed_formatter<spdlog::details::null_scoped_padder,std::chrono::duration<__int64,std::ratio<1,1000000>_>_>
            ::vftable;
  local_1c = puVar1;
  uVar2 = FUN_1022c7e0();
  *(undefined8 *)(puVar1 + 4) = uVar2;
  *param_1 = local_1c;
  ExceptionList = local_14;
  return;
}

