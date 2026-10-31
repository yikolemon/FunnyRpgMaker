/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b4bd */

ulonglong FUN_14001b4bd(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4
                       )

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined **local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [4];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_40 = param_4;
  FUN_14001b94e(&local_40,local_38);
  cVar1 = FUN_14001b986(local_38);
  if (cVar1 == '\0') {
    FUN_14001ba8e(&local_b8,local_38);
    local_c8 = param_2[2];
    local_d8 = *(undefined4 *)param_2;
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_d0 = *(undefined4 *)(param_2 + 1);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar2 = (*(code *)local_b8[3])(&local_b8,param_1,&local_d8,param_3);
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),uVar2);
    local_b8 = fmt::v12::format_facet<std::locale>::vftable;
    FUN_14000109c(local_68);
    FUN_14000109c(local_88);
    FUN_14000109c(local_a8);
  }
  else {
    plVar4 = (longlong *)FUN_14001b9fd(local_38);
    local_a8[0] = param_2[2];
    local_b8 = (undefined **)*param_2;
    uStack_b0 = *(undefined4 *)(param_2 + 1);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1,&local_b8,param_3);
    uVar6 = (ulonglong)uVar3;
  }
  if (local_30 != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*local_30 + 0x10))();
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return uVar6 & 0xffffffff;
}

