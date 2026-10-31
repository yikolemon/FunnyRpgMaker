/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00414fb4 */

undefined4 * __thiscall FUN_00414fb4(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  void *pvVar8;
  void *pvVar9;
  undefined1 auStack_3c [2];
  undefined2 local_3a;
  int local_38;
  int *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_004182d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004128bc(&local_30,param_2,**(char **)this,**(char **)((int)this + 4));
  local_28 = local_30;
  local_24 = this;
  if ((**(char **)((int)this + 8) == '\x01') &&
     (iVar3 = **(int **)((int)this + 0x10) - **(int **)((int)this + 0xc),
     iVar3 != 0 && **(int **)((int)this + 0xc) <= **(int **)((int)this + 0x10))) {
    local_3a = 0x30;
    FUN_00412954(&local_30,local_30,iVar3,&local_3a);
    local_28 = local_30;
  }
  local_30 = local_28;
  if (*(char *)(*(int *)((int)local_24 + 0x10) + 0xc) == '\x01') {
    if (**(int **)((int)local_24 + 0x14) == 0) {
      local_2c = FUN_0047f650('\x01');
    }
    else {
      local_2c = *(int **)(**(int **)((int)local_24 + 0x14) + 4);
      (**(code **)(*local_2c + 4))();
    }
    local_14 = 0;
    piVar4 = FUN_0040a572(&local_30);
    local_14 = 0xffffffff;
    if ((local_2c != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    pvVar8 = local_24;
    local_38 = **(int **)((int)local_24 + 0x24);
    uVar2 = (**(code **)(*piVar4 + 0x10))();
    pvVar9 = local_24;
    pcVar7 = *(char **)((int)pvVar8 + 0x20);
    piVar1 = (int *)(pcVar7 + 0x10);
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar7 = *(char **)pcVar7;
    }
    local_34 = piVar4;
    FUN_004129a0(&local_30,(char *)**(undefined4 **)((int)local_24 + 0x18),
                 (char *)**(undefined4 **)((int)local_24 + 0x1c),pcVar7,*piVar1,uVar2,local_38,
                 local_28);
    local_28 = local_30;
    if ((**(int **)((int)pvVar9 + 0x28) != **(int **)((int)pvVar9 + 0x2c)) ||
       (**(char **)((int)pvVar9 + 0x30) == '\x01')) {
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
      **(undefined1 **)((int)local_24 + 0x30) = 0;
      pvVar9 = local_24;
    }
    **(undefined4 **)((int)pvVar9 + 0x18) = **(undefined4 **)((int)pvVar9 + 0x1c);
    if (**(int **)((int)pvVar9 + 0x28) != **(int **)((int)pvVar9 + 0x2c)) {
      **(int **)((int)pvVar9 + 0x18) = **(int **)((int)pvVar9 + 0x18) + 1;
    }
  }
  pvVar8 = local_24;
  FUN_0040c483(&local_30,(char *)**(undefined4 **)((int)local_24 + 0x18),
               (char *)**(undefined4 **)((int)local_24 + 0x34),local_28);
  if ((*(char *)(*(int *)((int)pvVar8 + 0x10) + 0xb) == '\x01') &&
     (**(char **)((int)pvVar8 + 0x30) == '\x01')) {
    iVar3 = local_30[2];
    uVar6 = iVar3 + 1;
    if ((uint)local_30[3] < uVar6) {
      (**(code **)*local_30)(uVar6);
      iVar3 = local_30[2];
      uVar6 = iVar3 + 1;
    }
    local_30[2] = uVar6;
    *(undefined2 *)(local_30[1] + iVar3 * 2) = 0x2e;
    pvVar8 = local_24;
  }
  iVar3 = **(int **)((int)pvVar8 + 0x38);
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
    **(int **)((int)local_24 + 0x38) = **(int **)((int)local_24 + 0x38) + -1;
    iVar3 = **(int **)((int)local_24 + 0x38);
  }
  local_14 = 0xffffffff;
  FUN_0040c483(param_1,(char *)**(undefined4 **)((int)local_24 + 0x34),
               (char *)**(undefined4 **)((int)local_24 + 0x2c),local_30);
  ExceptionList = local_1c;
  return param_1;
}

