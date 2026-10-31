/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086444 */

undefined4 __fastcall FUN_10086444(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3250;
  local_18 = ExceptionList;
  iVar2 = *(int *)(param_1 + 8);
  iStack_24 = *(int *)(iVar2 + -4);
  ExceptionList = &local_18;
  if (iStack_24 == 0) {
    *(int *)(param_1 + 8) = iVar2 + -4;
    iStack_24 = 0x100864b3;
    FUN_1005103c();
  }
  else {
    iStack_2c = (iVar2 - *(int *)(param_1 + 4) >> 2) + -1;
    uStack_28 = 3;
    uStack_30 = 0x1008648e;
    local_1c = (undefined1 *)&local_20;
    iStack_24 = FUN_100510b2();
    if ((char)iStack_24 == '\0') {
      local_1c = (undefined1 *)&uStack_30;
      local_20 = (undefined1 *)&uStack_30;
      FUN_100868a4(param_1 + 0x68);
      local_10 = 0xffffffff;
      FUN_10084774();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      iStack_24 = 0x100864f8;
      local_1c = (undefined1 *)&local_20;
      FUN_1005103c();
      if ((*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) &&
         (pcVar3 = *(char **)(*(int *)(param_1 + 8) + -4), *pcVar3 == '\x02')) {
        iVar2 = *(int *)(pcVar3 + 8);
        iStack_24 = 0x10086518;
        FUN_1007f222();
        piVar1 = (int *)(iVar2 + 4);
        *piVar1 = *piVar1 + -0x10;
      }
    }
    else {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      iStack_24 = 0x100864a1;
      FUN_1005103c();
    }
  }
  ExceptionList = local_18;
  return 1;
}

