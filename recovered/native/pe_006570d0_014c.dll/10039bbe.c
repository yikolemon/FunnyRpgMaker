/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10039bbe */

void FUN_10039bbe(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10059de0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar2 = (undefined4 *)FUN_10228350(0x14);
  uVar1 = *param_2;
  *(undefined8 *)(puVar2 + 1) = 0;
  *(undefined2 *)(puVar2 + 3) = 0;
  *puVar2 = spdlog::details::ch_formatter::vftable;
  *(undefined1 *)(puVar2 + 4) = uVar1;
  *param_1 = puVar2;
  ExceptionList = local_14;
  return;
}

