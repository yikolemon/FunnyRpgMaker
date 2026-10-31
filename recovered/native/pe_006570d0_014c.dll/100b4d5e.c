/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4d5e */

int * __thiscall FUN_100b4d5e(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int *local_2c;
  char local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4910;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[3] = 0;
  param_1[2] = 0;
  local_24 = param_1;
  FUN_100b4ed4(param_1,1);
  if ((param_4 < (int)(uint)(param_3 == 0)) || (local_28 == '\0')) {
    uVar2 = 0;
  }
  else {
    local_14 = 1;
    lVar3 = (**(code **)(**(int **)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) + 0x20))
                      (param_2,param_3,param_4);
    *(longlong *)(local_24 + 2) = lVar3;
    uVar2 = (uint)(lVar3 != CONCAT44(param_4,param_3)) * 3;
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
               uVar2 | *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  piVar1 = *(int **)((int)local_2c + *(int *)(*local_2c + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_1c;
  return local_24;
}

