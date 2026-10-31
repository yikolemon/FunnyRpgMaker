/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001ba8e */

undefined8 * FUN_14001ba8e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  plVar4 = (longlong *)FUN_14001bd67(param_2);
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  puVar1 = param_1 + 6;
  if (puVar1 != &local_48) {
    FUN_140001f36(puVar1);
    param_1[8] = local_38;
    param_1[9] = uStack_30;
    *(undefined4 *)puVar1 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
    local_38 = 0;
    uStack_30 = 0xf;
    local_48 = local_48 & 0xffffffffffffff00;
  }
  puVar1 = &local_48;
  FUN_14000109c(puVar1);
  if (param_1[8] != 0) {
    bVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    uStack_40 = 0;
    local_38 = 1;
    uStack_30 = 0xf;
    local_48 = (ulonglong)bVar3;
    puVar2 = param_1 + 2;
    if (puVar2 != puVar1) {
      FUN_140001f36(puVar2);
      param_1[4] = local_38;
      param_1[5] = uStack_30;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_48._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
      local_48 = local_48 & 0xffffffffffffff00;
    }
    uStack_30 = 0xf;
    local_38 = (ulonglong)(puVar2 == puVar1);
    FUN_14000109c(&local_48);
  }
  return param_1;
}

