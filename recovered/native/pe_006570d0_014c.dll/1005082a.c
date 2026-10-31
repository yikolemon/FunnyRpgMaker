/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005082a */

undefined4 __fastcall FUN_1005082a(int param_1)

{
  undefined4 *puVar1;
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
  undefined4 *puStack_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a8f0;
  local_1c = ExceptionList;
  local_48 = *(char ***)(*(int *)(param_1 + 8) + -4);
  ExceptionList = &local_1c;
  ppuVar2 = &local_44;
  if (local_48 != (char **)0x0) {
    local_50 = CONCAT44(1,(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + -1);
    local_54 = (char *)0x10050875;
    local_48 = (char **)FUN_100510b2();
    ppuVar2 = (undefined1 **)local_20;
    if ((char)local_48 == '\0') {
      local_20 = (undefined1 *)&local_54;
      local_44 = (undefined1 *)&local_54;
      local_58 = (char **)(param_1 + 0x68);
      FUN_10013db4();
      local_14 = 0xffffffff;
      local_58 = (char **)0x100508ab;
      FUN_1004eed0();
      ppuVar2 = &local_44;
    }
  }
  local_20 = (undefined1 *)ppuVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  local_48 = (char **)0x100508bd;
  FUN_1005103c();
  if (((*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) &&
      (local_30 = *(char **)(*(int *)(param_1 + 8) + -4), local_30 != (char *)0x0)) &&
     (cVar3 = *local_30, (byte)(cVar3 - 1U) < 2)) {
    puStack_38 = (undefined4 *)0x0;
    local_3c = 0;
    local_34 = 0x80000000;
    local_40 = local_30;
    puVar1 = (undefined4 *)**(undefined4 **)(local_30 + 8);
    if (cVar3 == '\x01') {
      local_3c = *(undefined4 *)**(undefined4 **)(local_30 + 8);
      puVar1 = puStack_38;
    }
    while( true ) {
      puStack_38 = puVar1;
      local_28 = 0;
      local_2c = 0;
      local_24 = 0x80000000;
      if (cVar3 == '\x02') {
        local_28 = *(undefined4 *)(*(int *)(local_30 + 8) + 4);
      }
      else if (cVar3 == '\x01') {
        local_2c = **(undefined4 **)(local_30 + 8);
      }
      else {
        local_24 = 1;
      }
      local_48 = &local_30;
      local_50 = CONCAT44(0x1005095b,(undefined4)local_50);
      cVar3 = FUN_10051c02();
      if (cVar3 != '\0') {
        ExceptionList = local_1c;
        return 1;
      }
      local_48 = (char **)0x10050966;
      pcVar4 = (char *)FUN_1005189a();
      if (*pcVar4 == '\t') break;
      local_48 = (char **)0x10050972;
      FUN_10051ba0();
      local_30 = *(char **)(*(int *)(param_1 + 8) + -4);
      cVar3 = *local_30;
      puVar1 = puStack_38;
    }
    local_20 = (undefined1 *)&local_58;
    local_54 = local_40;
    local_48 = (char **)local_34;
    local_50 = CONCAT44(puStack_38,local_3c);
    local_58 = &local_30;
    FUN_1005194e();
  }
  ExceptionList = local_1c;
  return 1;
}

