/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004b266 */

undefined8 FUN_18004b266(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong local_60;
  longlong local_58;
  undefined2 local_4a;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_1800482ff(&local_48,param_3,*(undefined1 *)*param_1,*(undefined1 *)param_1[1]);
  if ((*(char *)param_1[2] == '\x01') &&
     (*(int *)param_1[4] != *(int *)param_1[3] && *(int *)param_1[3] <= *(int *)param_1[4])) {
    local_4a = 0x30;
    FUN_1800483b4(&local_48,local_48);
  }
  puVar8 = local_48;
  if (*(char *)(param_1[4] + 0xc) == '\x01') {
    if (*(longlong *)param_1[5] == 0) {
      local_40 = (longlong *)FUN_18023d070(1);
    }
    else {
      local_40 = *(longlong **)(*(longlong *)param_1[5] + 8);
      (**(code **)(*local_40 + 8))(local_40);
    }
    plVar4 = (longlong *)FUN_180047447(&local_48);
    if ((local_40 != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(*local_40 + 0x10))(), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uVar1 = *(undefined4 *)param_1[9];
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    local_60 = param_1[8];
    local_58 = *(longlong *)(local_60 + 0x10);
    if (0xf < *(ulonglong *)(local_60 + 0x18)) {
      local_60 = *(longlong *)local_60;
    }
    FUN_180048419(&local_48,*(undefined8 *)param_1[6],*(undefined8 *)param_1[7],&local_60,uVar3,
                  uVar1,puVar8);
    puVar8 = local_48;
    if ((*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) || (*(char *)param_1[0xc] == '\x01')
       ) {
      uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar6 = puVar8[2];
      uVar7 = lVar6 + 1;
      if ((ulonglong)puVar8[3] < uVar7) {
        (**(code **)*puVar8)(puVar8);
        lVar6 = puVar8[2];
        uVar7 = lVar6 + 1;
      }
      puVar8[2] = uVar7;
      *(undefined2 *)(puVar8[1] + lVar6 * 2) = uVar3;
      *(undefined1 *)param_1[0xc] = 0;
    }
    *(undefined8 *)param_1[6] = *(undefined8 *)param_1[7];
    if (*(longlong *)param_1[10] != *(longlong *)param_1[0xb]) {
      *(longlong *)param_1[6] = *(longlong *)param_1[6] + 1;
    }
  }
  FUN_18004588f(&local_48,*(undefined8 *)param_1[6],*(undefined8 *)param_1[0xd],puVar8);
  if ((*(char *)(param_1[4] + 0xb) == '\x01') && (*(char *)param_1[0xc] == '\x01')) {
    lVar6 = local_48[2];
    uVar7 = lVar6 + 1;
    if ((ulonglong)local_48[3] < uVar7) {
      (**(code **)*local_48)(local_48);
      lVar6 = local_48[2];
      uVar7 = lVar6 + 1;
    }
    local_48[2] = uVar7;
    *(undefined2 *)(local_48[1] + lVar6 * 2) = 0x2e;
  }
  iVar2 = *(int *)param_1[0xe];
  while (0 < iVar2) {
    lVar6 = local_48[2];
    uVar7 = lVar6 + 1;
    if ((ulonglong)local_48[3] < uVar7) {
      (**(code **)*local_48)(local_48);
      lVar6 = local_48[2];
      uVar7 = lVar6 + 1;
    }
    local_48[2] = uVar7;
    *(undefined2 *)(local_48[1] + lVar6 * 2) = 0x30;
    *(int *)param_1[0xe] = *(int *)param_1[0xe] + -1;
    iVar2 = *(int *)param_1[0xe];
  }
  FUN_18004588f(param_2,*(undefined8 *)param_1[0xd],*(undefined8 *)param_1[0xb],local_48);
  return param_2;
}

