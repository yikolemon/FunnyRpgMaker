/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003e51e */

void FUN_1003e51e(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_1005a260;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar2 = (undefined4 *)FUN_10228350(0x28);
  uVar1 = *param_3;
  puVar2[3] = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(puVar2 + 1) = *param_2;
  *puVar2 = spdlog::details::z_formatter<spdlog::details::null_scoped_padder>::vftable;
  puVar2[4] = uVar1;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  *param_1 = puVar2;
  ExceptionList = local_14;
  return;
}

