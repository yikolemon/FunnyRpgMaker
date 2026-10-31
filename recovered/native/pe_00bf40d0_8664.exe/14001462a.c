/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001462a */

undefined8 * FUN_14001462a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong local_60;
  longlong local_58;
  undefined2 local_4a;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140011793(&local_48,param_3,*(char *)*param_1,*(char *)param_1[1]);
  if ((*(char *)param_1[2] == '\x01') &&
     (uVar8 = *(int *)param_1[4] - *(int *)param_1[3],
     uVar8 != 0 && *(int *)param_1[3] <= *(int *)param_1[4])) {
    local_4a = 0x30;
    FUN_140011848(&local_48,local_48,(ulonglong)uVar8,&local_4a);
  }
  puVar7 = local_48;
  if (*(char *)(param_1[4] + 0xc) == '\x01') {
    if (*(longlong *)param_1[5] == 0) {
      local_40 = FUN_140086860('\x01');
    }
    else {
      local_40 = *(longlong **)(*(longlong *)param_1[5] + 8);
      (**(code **)(*local_40 + 8))(local_40);
    }
    plVar3 = FUN_140009dcb((longlong)&local_48);
    if ((local_40 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*local_40 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    iVar1 = *(int *)param_1[9];
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    local_60 = param_1[8];
    local_58 = *(longlong *)(local_60 + 0x10);
    if (0xf < *(ulonglong *)(local_60 + 0x18)) {
      local_60 = *(longlong *)local_60;
    }
    FUN_1400118ad(&local_48,*(char **)param_1[6],*(char **)param_1[7],&local_60,uVar2,iVar1,puVar7);
    puVar7 = local_48;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] == '\x01')
       ) {
      uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar5 = puVar7[2];
      uVar6 = lVar5 + 1;
      if ((ulonglong)puVar7[3] < uVar6) {
        (**(code **)*puVar7)(puVar7);
        lVar5 = puVar7[2];
        uVar6 = lVar5 + 1;
      }
      puVar7[2] = uVar6;
      *(undefined2 *)(puVar7[1] + lVar5 * 2) = uVar2;
      *(undefined1 *)param_1[0xc] = 0;
    }
    *(undefined8 *)param_1[6] = *(undefined8 *)param_1[7];
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      *(longlong *)param_1[6] = *(longlong *)param_1[6] + 1;
    }
  }
  FUN_14000beb2(&local_48,*(char **)param_1[6],*(char **)param_1[0xd],puVar7);
  if ((*(char *)(param_1[4] + 0xb) == '\x01') && (*(char *)param_1[0xc] == '\x01')) {
    lVar5 = local_48[2];
    uVar6 = lVar5 + 1;
    if ((ulonglong)local_48[3] < uVar6) {
      (**(code **)*local_48)(local_48);
      lVar5 = local_48[2];
      uVar6 = lVar5 + 1;
    }
    local_48[2] = uVar6;
    *(undefined2 *)(local_48[1] + lVar5 * 2) = 0x2e;
  }
  iVar1 = *(int *)param_1[0xe];
  while (0 < iVar1) {
    lVar5 = local_48[2];
    uVar6 = lVar5 + 1;
    if ((ulonglong)local_48[3] < uVar6) {
      (**(code **)*local_48)(local_48);
      lVar5 = local_48[2];
      uVar6 = lVar5 + 1;
    }
    local_48[2] = uVar6;
    *(undefined2 *)(local_48[1] + lVar5 * 2) = 0x30;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
    iVar1 = *(int *)param_1[0xe];
  }
  FUN_14000beb2(param_2,*(char **)param_1[0xd],*(char **)param_1[0xb],local_48);
  return param_2;
}

