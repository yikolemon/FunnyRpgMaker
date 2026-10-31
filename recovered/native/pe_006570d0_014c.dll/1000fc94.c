/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000fc94 */

undefined4 __thiscall FUN_1000fc94(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_3c;
  int *local_38;
  undefined1 local_31;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012b10;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1000d090(&local_30,param_3,*(undefined1 *)*param_1,*(undefined1 *)param_1[1]);
  local_28 = local_30;
  local_24 = param_1;
  if ((*(char *)param_1[2] == '\x01') &&
     (iVar4 = *(int *)param_1[4] - *(int *)param_1[3],
     iVar4 != 0 && *(int *)param_1[3] <= *(int *)param_1[4])) {
    local_31 = 0x30;
    FUN_1000d122(&local_30,local_30,iVar4,&local_31);
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
    piVar5 = (int *)FUN_1000c417(&local_30);
    local_14 = 0xffffffff;
    if ((local_2c != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    puVar6 = local_24;
    local_3c = *(undefined4 *)local_24[9];
    cVar2 = (**(code **)(*piVar5 + 0x10))();
    puVar9 = local_24;
    piVar8 = (int *)puVar6[8];
    piVar1 = piVar8 + 4;
    if (0xf < (uint)piVar8[5]) {
      piVar8 = (int *)*piVar8;
    }
    local_38 = piVar5;
    FUN_1000d17a(&local_30,*(undefined4 *)local_24[6],*(undefined4 *)local_24[7],piVar8,*piVar1,
                 (int)cVar2,local_3c,local_28);
    local_28 = local_30;
    if ((*(int *)puVar9[10] != *(int *)puVar9[0xb]) || (*(char *)puVar9[0xc] == '\x01')) {
      uVar3 = (**(code **)(*local_38 + 0xc))();
      puVar6 = local_28;
      iVar4 = local_28[2];
      uVar7 = iVar4 + 1;
      if ((uint)local_28[3] < uVar7) {
        (**(code **)*local_28)(uVar7);
        iVar4 = puVar6[2];
        uVar7 = iVar4 + 1;
      }
      puVar6[2] = uVar7;
      *(undefined1 *)(puVar6[1] + iVar4) = uVar3;
      *(undefined1 *)local_24[0xc] = 0;
      puVar9 = local_24;
    }
    *(undefined4 *)puVar9[6] = *(undefined4 *)puVar9[7];
    if (*(int *)puVar9[10] != *(int *)puVar9[0xb]) {
      *(int *)puVar9[6] = *(int *)puVar9[6] + 1;
    }
  }
  puVar6 = local_24;
  FUN_10006bdf(&local_30,*(undefined4 *)local_24[6],*(undefined4 *)local_24[0xd],local_28);
  if ((*(char *)(puVar6[4] + 0xb) == '\x01') && (*(char *)puVar6[0xc] == '\x01')) {
    iVar4 = local_30[2];
    uVar7 = iVar4 + 1;
    if ((uint)local_30[3] < uVar7) {
      (**(code **)*local_30)(uVar7);
      iVar4 = local_30[2];
      uVar7 = iVar4 + 1;
    }
    local_30[2] = uVar7;
    *(undefined1 *)(local_30[1] + iVar4) = 0x2e;
    puVar6 = local_24;
  }
  iVar4 = *(int *)puVar6[0xe];
  while (0 < iVar4) {
    iVar4 = local_30[2];
    uVar7 = iVar4 + 1;
    if ((uint)local_30[3] < uVar7) {
      local_14 = 0xffffffff;
      (**(code **)*local_30)(uVar7);
      iVar4 = local_30[2];
      uVar7 = iVar4 + 1;
    }
    local_30[2] = uVar7;
    *(undefined1 *)(local_30[1] + iVar4) = 0x30;
    *(int *)local_24[0xe] = *(int *)local_24[0xe] + -1;
    iVar4 = *(int *)local_24[0xe];
  }
  local_14 = 0xffffffff;
  FUN_10006bdf(param_2,*(undefined4 *)local_24[0xd],*(undefined4 *)local_24[0xb],local_30);
  ExceptionList = local_1c;
  return param_2;
}

