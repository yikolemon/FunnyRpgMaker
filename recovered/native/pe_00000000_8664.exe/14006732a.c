/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006732a */

undefined8 FUN_14006732a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1400680d1(&local_50,param_3,*(undefined1 *)(param_1[1] + 10),*(uint *)param_1[2] >> 0x1f);
  lVar2 = *(longlong *)param_1[3];
  FUN_140065771(&local_50,lVar2,((longlong *)param_1[3])[1] + lVar2,local_50);
  uVar6 = local_50;
  if (*(char *)param_1[4] == '\x01') {
    if (*(int *)param_1[1] != *(int *)param_1[5] && *(int *)param_1[5] <= *(int *)param_1[1]) {
      local_3a = 0x30;
      FUN_140068186(&local_50,local_50);
      uVar6 = local_50;
    }
  }
  iVar1 = *(int *)param_1[6];
  if (iVar1 < 1) {
    FUN_140065771(param_2,*(undefined8 *)param_1[7],*param_1,uVar6);
  }
  else {
    if (*(longlong *)param_1[9] == 0) {
      local_48 = (longlong *)FUN_140189300(1);
    }
    else {
      local_48 = *(longlong **)(*(longlong *)param_1[9] + 8);
      (**(code **)(*local_48 + 8))(local_48);
    }
    plVar4 = (longlong *)FUN_14005ba2b(&local_50);
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    local_60 = param_1[8];
    local_58 = *(longlong *)(local_60 + 0x10);
    if (0xf < *(ulonglong *)(local_60 + 0x18)) {
      local_60 = *(longlong *)local_60;
    }
    FUN_1400681eb(param_2,*(undefined8 *)param_1[7],*param_1,&local_60,uVar3,iVar1,uVar6);
    if (local_48 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  return param_2;
}

