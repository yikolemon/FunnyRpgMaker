/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10089534 */

int __thiscall FUN_10089534(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3480;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  if (param_1[1] == param_1[2]) {
    puStack_24 = param_2;
    local_1c = auStack_30;
    local_20 = auStack_30;
    FUN_10080e50(*param_2);
    local_10 = 0xffffffff;
    FUN_10084774();
    iVar1 = *param_1;
  }
  else if (**(char **)(param_1[2] + -4) == '\x02') {
    puStack_24 = param_2;
    uStack_28 = 0x10089581;
    FUN_10089640();
    iVar1 = *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  else {
    puStack_24 = param_2;
    local_1c = auStack_30;
    local_20 = auStack_30;
    FUN_10080e50(*param_2);
    local_10 = 0xffffffff;
    FUN_10084774();
    iVar1 = param_1[4];
  }
  ExceptionList = local_18;
  return iVar1;
}

