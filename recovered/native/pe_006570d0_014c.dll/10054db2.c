/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054db2 */

int __thiscall FUN_10054db2(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_1005abd0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  if (param_1[1] == param_1[2]) {
    uStack_24 = param_2;
    local_1c = auStack_30;
    local_20 = auStack_30;
    FUN_10052d6e(param_2);
    local_10 = 0xffffffff;
    FUN_1004eed0();
    iVar1 = *param_1;
  }
  else if (**(char **)(param_1[2] + -4) == '\x02') {
    uStack_24 = param_2;
    uStack_28 = 0x10054dff;
    FUN_10054eb8();
    iVar1 = *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
  }
  else {
    uStack_24 = param_2;
    local_1c = auStack_30;
    local_20 = auStack_30;
    FUN_10052d6e(param_2);
    local_10 = 0xffffffff;
    FUN_1004eed0();
    iVar1 = param_1[4];
  }
  ExceptionList = local_18;
  return iVar1;
}

