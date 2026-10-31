/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017e0ba */

int FUN_1017e0ba(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10180480;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10067534(param_1);
  iVar1 = local_20;
  local_10 = 0;
  FUN_1017e21a(param_3,param_4);
  **(undefined4 **)(iVar1 + 4) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xd) = 0;
  ExceptionList = local_18;
  return local_20;
}

