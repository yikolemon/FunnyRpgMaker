/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10085f8a */

undefined4 __fastcall FUN_10085f8a(int param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  char cVar3;
  char *pcVar4;
  char **local_58;
  char *local_54;
  undefined8 local_50;
  char **local_48;
  undefined1 *local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  int local_2c;
  int iStack_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3220;
  local_1c = ExceptionList;
  local_48 = *(char ***)(*(int *)(param_1 + 8) + -4);
  ExceptionList = &local_1c;
  ppuVar2 = &local_44;
  if (local_48 != (char **)0x0) {
    local_50 = CONCAT44(1,(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1);
    local_54 = (char *)0x10085fd5;
    local_48 = (char **)FUN_100510b2();
    ppuVar2 = (undefined1 **)local_20;
    if ((char)local_48 == '\0') {
      local_20 = (undefined1 *)&local_54;
      local_44 = (undefined1 *)&local_54;
      local_58 = (char **)(param_1 + 0x68);
      FUN_100868a4();
      local_14 = 0xffffffff;
      local_58 = (char **)0x1008600b;
      FUN_10084774();
      ppuVar2 = &local_44;
    }
  }
  local_20 = (undefined1 *)ppuVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  local_48 = (char **)0x1008601d;
  FUN_1005103c();
  if (((*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) &&
      (local_40 = *(char **)(*(int *)(param_1 + 8) + -4), local_40 != (char *)0x0)) &&
     (cVar3 = *local_40, (byte)(cVar3 - 1U) < 2)) {
    iStack_28 = 0;
    local_2c = 0;
    local_24 = -0x80000000;
    local_30 = local_40;
    iVar1 = **(int **)(local_40 + 8);
    if (cVar3 == '\x01') {
      local_2c = **(int **)(local_40 + 8);
      iVar1 = iStack_28;
    }
    while( true ) {
      iStack_28 = iVar1;
      local_38 = 0;
      local_3c = 0;
      local_34 = 0x80000000;
      if (cVar3 == '\x02') {
        local_38 = *(undefined4 *)(*(int *)(local_40 + 8) + 4);
      }
      else if (cVar3 == '\x01') {
        local_3c = *(undefined4 *)(*(int *)(local_40 + 8) + 4);
      }
      else {
        local_34 = 1;
      }
      local_48 = &local_40;
      local_50 = CONCAT44(0x100860ba,(undefined4)local_50);
      cVar3 = FUN_10051c02();
      if (cVar3 != '\0') {
        ExceptionList = local_1c;
        return 1;
      }
      local_48 = (char **)0x100860c5;
      pcVar4 = (char *)FUN_100869ec();
      if (*pcVar4 == '\t') break;
      if (*local_30 == '\x02') {
        iStack_28 = iStack_28 + 0x10;
      }
      else if (*local_30 == '\x01') {
        local_2c = local_2c + 0x28;
      }
      else {
        local_24 = local_24 + 1;
      }
      local_40 = *(char **)(*(int *)(param_1 + 8) + -4);
      cVar3 = *local_40;
      iVar1 = iStack_28;
    }
    local_20 = (undefined1 *)&local_58;
    local_54 = local_30;
    local_48 = (char **)local_24;
    local_50 = CONCAT44(iStack_28,local_2c);
    local_58 = &local_40;
    FUN_10086aa0();
  }
  ExceptionList = local_1c;
  return 1;
}

