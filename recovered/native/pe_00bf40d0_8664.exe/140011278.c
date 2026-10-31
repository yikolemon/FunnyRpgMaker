/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140011278 */

undefined8 * FUN_140011278(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong *local_48;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140011793(&local_50,param_3,*(char *)(param_1[1] + 10),'\0');
  pcVar2 = *(char **)param_1[2];
  FUN_14000beb2(&local_50,pcVar2,pcVar2 + ((undefined8 *)param_1[2])[1],local_50);
  puVar5 = local_50;
  if ((*(char *)param_1[3] == '\x01') &&
     (uVar6 = *(int *)param_1[1] - *(int *)param_1[4],
     uVar6 != 0 && *(int *)param_1[4] <= *(int *)param_1[1])) {
    local_3a = 0x30;
    FUN_140011848(&local_50,local_50,(ulonglong)uVar6,&local_3a);
    puVar5 = local_50;
  }
  iVar1 = *(int *)param_1[5];
  if (iVar1 < 1) {
    FUN_14000beb2(param_2,*(char **)param_1[6],(char *)*param_1,puVar5);
  }
  else {
    if (*(longlong *)param_1[8] == 0) {
      local_48 = FUN_140086860('\x01');
    }
    else {
      local_48 = *(longlong **)(*(longlong *)param_1[8] + 8);
      (**(code **)(*local_48 + 8))(local_48);
    }
    plVar4 = FUN_140009dcb((longlong)&local_50);
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    local_60 = param_1[7];
    local_58 = *(longlong *)(local_60 + 0x10);
    if (0xf < *(ulonglong *)(local_60 + 0x18)) {
      local_60 = *(longlong *)local_60;
    }
    FUN_1400118ad(param_2,*(char **)param_1[6],(char *)*param_1,&local_60,uVar3,iVar1,puVar5);
    if (local_48 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*local_48 + 0x10))();
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  return param_2;
}

