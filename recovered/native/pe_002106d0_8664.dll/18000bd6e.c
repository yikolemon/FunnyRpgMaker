/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000bd6e */

undefined8 FUN_18000bd6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_18000c251(&local_50,param_3,*(undefined1 *)(param_1[1] + 10),0);
  lVar2 = *(longlong *)param_1[2];
  FUN_18000692b(&local_50,lVar2,((longlong *)param_1[2])[1] + lVar2,local_50);
  uVar6 = local_50;
  if (*(char *)param_1[3] == '\x01') {
    if (*(int *)param_1[1] != *(int *)param_1[4] && *(int *)param_1[4] <= *(int *)param_1[1]) {
      local_39 = 0x30;
      FUN_18000c300(&local_50,local_50);
      uVar6 = local_50;
    }
  }
  iVar1 = *(int *)param_1[5];
  if (iVar1 < 1) {
    FUN_18000692b(param_2,*(undefined8 *)param_1[6],*param_1,uVar6);
  }
  else {
    if (*(longlong *)param_1[8] == 0) {
      local_48 = (longlong *)FUN_18023d070(1);
    }
    else {
      local_48 = *(longlong **)(*(longlong *)param_1[8] + 8);
      (**(code **)(*local_48 + 8))(local_48);
    }
    plVar4 = (longlong *)FUN_18000b3c1(&local_50);
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    local_60 = param_1[7];
    local_58 = *(longlong *)(local_60 + 0x10);
    if (0xf < *(ulonglong *)(local_60 + 0x18)) {
      local_60 = *(longlong *)local_60;
    }
    FUN_18000c365(param_2,*(undefined8 *)param_1[6],*param_1,&local_60,uVar3,iVar1,uVar6);
    if (local_48 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  return param_2;
}

