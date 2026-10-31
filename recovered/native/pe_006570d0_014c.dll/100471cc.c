/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100471cc */

undefined4 __thiscall FUN_100471cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a6c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10047d34(&local_30,param_3,*(undefined1 *)(param_1[1] + 10),*(uint *)param_1[2] >> 0x1f);
  iVar2 = *(int *)param_1[3];
  FUN_10045530(&local_30,iVar2,((int *)param_1[3])[1] + iVar2,local_30);
  local_24 = local_30;
  local_28 = param_1;
  if ((*(char *)param_1[4] == '\x01') &&
     (iVar2 = *(int *)param_1[1] - *(int *)param_1[5],
     iVar2 != 0 && *(int *)param_1[5] <= *(int *)param_1[1])) {
    local_36 = 0x30;
    FUN_10047dcc(&local_30,local_30,iVar2,&local_36);
    local_24 = local_30;
  }
  local_34 = *(int *)local_28[6];
  if (local_34 < 1) {
    FUN_10045530(param_2,*(undefined4 *)local_28[7],*local_28,local_24);
  }
  else {
    if (*(int *)local_28[9] == 0) {
      local_2c = (int *)FUN_1022bce0(1);
    }
    else {
      local_2c = *(int **)(*(int *)local_28[9] + 4);
      (**(code **)(*local_2c + 4))();
    }
    local_14 = 0;
    piVar3 = (int *)FUN_100470ba(&local_30);
    uVar1 = (**(code **)(*piVar3 + 0x10))();
    piVar5 = (int *)local_28[8];
    piVar3 = piVar5 + 4;
    if (0xf < (uint)piVar5[5]) {
      piVar5 = (int *)*piVar5;
    }
    FUN_10047e18(param_2,*(undefined4 *)local_28[7],*local_28,piVar5,*piVar3,uVar1,local_34,local_24
                );
    local_14 = 0xffffffff;
    if ((local_2c != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_1c;
  return param_2;
}

