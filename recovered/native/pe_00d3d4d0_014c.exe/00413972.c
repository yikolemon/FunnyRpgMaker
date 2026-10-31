/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00413972 */

undefined4 * __thiscall FUN_00413972(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  int local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418280;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004128bc(&local_30,param_2,*(char *)(*(int *)((int)this + 4) + 10),
               (byte)((uint)*(undefined4 *)(*(int *)((int)this + 8) + 4) >> 0x1f));
  pcVar5 = (char *)**(undefined4 **)((int)this + 0xc);
  FUN_0040c483(&local_30,pcVar5,pcVar5 + (*(undefined4 **)((int)this + 0xc))[1],local_30);
  local_24 = local_30;
  local_28 = this;
  if ((**(char **)((int)this + 0x10) == '\x01') &&
     (iVar2 = **(int **)((int)this + 4) - **(int **)((int)this + 0x14),
     iVar2 != 0 && **(int **)((int)this + 0x14) <= **(int **)((int)this + 4))) {
    local_36 = 0x30;
    FUN_00412954(&local_30,local_30,iVar2,&local_36);
    local_24 = local_30;
  }
  local_34 = *(int *)local_28[6];
  if (local_34 < 1) {
    FUN_0040c483(param_1,*(char **)local_28[7],(char *)*local_28,local_24);
  }
  else {
    if (*(int *)local_28[9] == 0) {
      local_2c = FUN_0047f650('\x01');
    }
    else {
      local_2c = *(int **)(*(int *)local_28[9] + 4);
      (**(code **)(*local_2c + 4))();
    }
    local_14 = 0;
    piVar3 = FUN_0040a572(&local_30);
    uVar1 = (**(code **)(*piVar3 + 0x10))();
    pcVar5 = (char *)local_28[8];
    piVar3 = (int *)(pcVar5 + 0x10);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    FUN_004129a0(param_1,*(char **)local_28[7],(char *)*local_28,pcVar5,*piVar3,uVar1,local_34,
                 local_24);
    local_14 = 0xffffffff;
    if ((local_2c != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

