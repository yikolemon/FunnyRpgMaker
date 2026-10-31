/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10089d12 */

int __thiscall FUN_10089d12(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c34e0;
  local_1c = ExceptionList;
  pcStack_28 = (char *)param_1[2];
  ExceptionList = &local_1c;
  if ((char *)param_1[1] == pcStack_28) {
    local_20 = auStack_34;
    local_24 = auStack_34;
    FUN_10080804(0);
    local_14 = 0xffffffff;
    FUN_10084774();
    iVar1 = *param_1;
  }
  else {
    pcStack_28 = *(char **)((int)pcStack_28 + -4);
    if (*pcStack_28 == '\x02') {
      pcStack_28 = (char *)param_2;
      uStack_2c = 0x10089d5d;
      FUN_10089e16();
      iVar1 = *(int *)(*(int *)(*(int *)(param_1[2] + -4) + 8) + 4) + -0x10;
    }
    else {
      local_20 = auStack_34;
      local_24 = auStack_34;
      FUN_10080804(0);
      local_14 = 0xffffffff;
      FUN_10084774();
      iVar1 = param_1[4];
    }
  }
  ExceptionList = local_1c;
  return iVar1;
}

