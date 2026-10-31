/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10039b2a */

void FUN_10039b2a(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10059dd0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0x10);
  puVar1[3] = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(puVar1 + 1) = *param_2;
  *puVar1 = spdlog::details::source_funcname_formatter<spdlog::details::scoped_padder>::vftable;
  *param_1 = puVar1;
  ExceptionList = local_14;
  return;
}

