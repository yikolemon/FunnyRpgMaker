/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e907a */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100e907a(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *local_68;
  char *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 *local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined1 local_38 [8];
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_18 = &LAB_100eadc0;
  local_1c = ExceptionList;
  local_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  local_14 = 0;
  cVar1 = *param_1;
  iStack_3c = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iStack_3c = *(int *)(*(int *)(param_1 + 8) + 4);
    }
    else if (cVar1 == '\x02') {
      iStack_3c = (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 4;
    }
    else {
      iStack_3c = 1;
    }
  }
  local_40 = 0x100e90f2;
  ExceptionList = &local_1c;
  iStack_3c = FUN_100e9216();
  local_30 = local_38;
  local_20 = (undefined1 *)&local_68;
  local_44 = (undefined8 *)&local_2c;
  local_40 = uStack_28;
  local_54 = param_1;
  local_4c = 0;
  local_50 = (undefined4 *)0x0;
  local_48 = 0x80000000;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    local_4c = (*(undefined4 **)(param_1 + 8))[1];
    local_60 = 0;
    local_58 = 0x80000000;
    local_5c = **(undefined4 **)(param_1 + 8);
  }
  else if (cVar1 == '\x01') {
    local_50 = (undefined4 *)**(undefined4 **)(param_1 + 8);
    local_5c = 0;
    local_58 = 0x80000000;
    local_60 = *local_50;
  }
  else {
    local_48 = 1;
    local_5c = 0;
    local_60 = 0;
    if (cVar1 == '\0') {
      local_58 = 1;
    }
    else {
      local_58 = 0;
    }
  }
  local_64 = param_1;
  local_68 = local_38;
  FUN_100e926b();
  puVar2 = local_30;
  local_20 = local_30;
  if (param_2 != (undefined8 *)&local_2c) {
    *(undefined4 *)(local_30 + -4) = 0x100e91c7;
    FUN_10060b3c();
    *param_2 = CONCAT44(uStack_28,local_2c);
    *(undefined4 *)(param_2 + 1) = local_24;
    local_2c = 0;
    uStack_28 = 0;
    local_24 = 0;
  }
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x100e91f1;
  FUN_10060b3c();
  ExceptionList = local_1c;
  return;
}

