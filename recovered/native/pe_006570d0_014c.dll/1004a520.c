/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004a520 */

undefined4 __thiscall FUN_1004a520(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 auStack_3c [2];
  undefined2 local_3a;
  undefined4 local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a790;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10047d34(&local_30,param_3,*(undefined1 *)*param_1,*(undefined1 *)param_1[1]);
  local_28 = local_30;
  local_24 = param_1;
  if ((*(char *)param_1[2] == '\x01') &&
     (iVar3 = *(int *)param_1[4] - *(int *)param_1[3],
     iVar3 != 0 && *(int *)param_1[3] <= *(int *)param_1[4])) {
    local_3a = 0x30;
    FUN_10047dcc(&local_30,local_30,iVar3,&local_3a);
    local_28 = local_30;
  }
  local_30 = local_28;
  if (*(char *)(local_24[4] + 0xc) == '\x01') {
    if (*(int *)local_24[5] == 0) {
      local_2c = (int *)FUN_1022bce0(1);
    }
    else {
      local_2c = *(int **)(*(int *)local_24[5] + 4);
      (**(code **)(*local_2c + 4))();
    }
    local_14 = 0;
    piVar4 = (int *)FUN_100470ba(&local_30);
    local_14 = 0xffffffff;
    if ((local_2c != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    puVar5 = local_24;
    local_38 = *(undefined4 *)local_24[9];
    uVar2 = (**(code **)(*piVar4 + 0x10))();
    puVar8 = local_24;
    piVar7 = (int *)puVar5[8];
    piVar1 = piVar7 + 4;
    if (0xf < (uint)piVar7[5]) {
      piVar7 = (int *)*piVar7;
    }
    local_34 = piVar4;
    FUN_10047e18(&local_30,*(undefined4 *)local_24[6],*(undefined4 *)local_24[7],piVar7,*piVar1,
                 uVar2,local_38,local_28);
    local_28 = local_30;
    if ((*(int *)puVar8[10] != *(int *)puVar8[0xb]) || (*(char *)puVar8[0xc] == '\x01')) {
      uVar2 = (**(code **)(*local_34 + 0xc))();
      puVar5 = local_28;
      iVar3 = local_28[2];
      uVar6 = iVar3 + 1;
      if ((uint)local_28[3] < uVar6) {
        (**(code **)*local_28)(uVar6);
        iVar3 = puVar5[2];
        uVar6 = iVar3 + 1;
      }
      puVar5[2] = uVar6;
      *(undefined2 *)(puVar5[1] + iVar3 * 2) = uVar2;
      *(undefined1 *)local_24[0xc] = 0;
      puVar8 = local_24;
    }
    *(undefined4 *)puVar8[6] = *(undefined4 *)puVar8[7];
    if (*(int *)puVar8[10] != *(int *)puVar8[0xb]) {
      *(int *)puVar8[6] = *(int *)puVar8[6] + 1;
    }
  }
  puVar5 = local_24;
  FUN_10045530(&local_30,*(undefined4 *)local_24[6],*(undefined4 *)local_24[0xd],local_28);
  if ((*(char *)(puVar5[4] + 0xb) == '\x01') && (*(char *)puVar5[0xc] == '\x01')) {
    iVar3 = local_30[2];
    uVar6 = iVar3 + 1;
    if ((uint)local_30[3] < uVar6) {
      (**(code **)*local_30)(uVar6);
      iVar3 = local_30[2];
      uVar6 = iVar3 + 1;
    }
    local_30[2] = uVar6;
    *(undefined2 *)(local_30[1] + iVar3 * 2) = 0x2e;
    puVar5 = local_24;
  }
  iVar3 = *(int *)puVar5[0xe];
  while (0 < iVar3) {
    iVar3 = local_30[2];
    uVar6 = iVar3 + 1;
    if ((uint)local_30[3] < uVar6) {
      local_14 = 0xffffffff;
      (**(code **)*local_30)(uVar6);
      iVar3 = local_30[2];
      uVar6 = iVar3 + 1;
    }
    local_30[2] = uVar6;
    *(undefined2 *)(local_30[1] + iVar3 * 2) = 0x30;
    *(int *)local_24[0xe] = *(int *)local_24[0xe] + -1;
    iVar3 = *(int *)local_24[0xe];
  }
  local_14 = 0xffffffff;
  FUN_10045530(param_2,*(undefined4 *)local_24[0xd],*(undefined4 *)local_24[0xb],local_30);
  ExceptionList = local_1c;
  return param_2;
}

