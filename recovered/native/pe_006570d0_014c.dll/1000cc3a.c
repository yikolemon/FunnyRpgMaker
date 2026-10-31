/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000cc3a */

undefined4 __thiscall FUN_1000cc3a(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_38;
  undefined4 local_34;
  int *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012a20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1000d090(&local_34,param_3,*(undefined1 *)(param_1[1] + 10),0);
  iVar2 = *(int *)param_1[2];
  FUN_10006bdf(&local_34,iVar2,((int *)param_1[2])[1] + iVar2,local_34);
  local_24 = local_34;
  local_28 = param_1;
  if ((*(char *)param_1[3] == '\x01') &&
     (iVar2 = *(int *)param_1[1] - *(int *)param_1[4],
     iVar2 != 0 && *(int *)param_1[4] <= *(int *)param_1[1])) {
    local_29 = 0x30;
    FUN_1000d122(&local_34,local_34,iVar2,&local_29);
    local_24 = local_34;
  }
  local_38 = *(int *)local_28[5];
  if (local_38 < 1) {
    FUN_10006bdf(param_2,*(undefined4 *)local_28[6],*local_28,local_24);
  }
  else {
    if (*(int *)local_28[8] == 0) {
      local_30 = (int *)FUN_1022bce0(1);
    }
    else {
      local_30 = *(int **)(*(int *)local_28[8] + 4);
      (**(code **)(*local_30 + 4))();
    }
    local_14 = 0;
    piVar3 = (int *)FUN_1000c417(&local_34);
    cVar1 = (**(code **)(*piVar3 + 0x10))();
    piVar5 = (int *)local_28[7];
    piVar3 = piVar5 + 4;
    if (0xf < (uint)piVar5[5]) {
      piVar5 = (int *)*piVar5;
    }
    FUN_1000d17a(param_2,*(undefined4 *)local_28[6],*local_28,piVar5,*piVar3,(int)cVar1,local_38,
                 local_24);
    local_14 = 0xffffffff;
    if ((local_30 != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_30 + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_1c;
  return param_2;
}

