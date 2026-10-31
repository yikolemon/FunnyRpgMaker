/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e8574 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100e8574(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  char *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 *local_64;
  undefined4 local_60;
  int iStack_5c;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_44 [32];
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_18 = &LAB_100ead40;
  local_1c = ExceptionList;
  local_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  local_14 = 0;
  iStack_5c = 0x100e85b6;
  ExceptionList = &local_1c;
  FUN_1002218a();
  local_14 = 2;
  cVar1 = *param_1;
  iStack_5c = 0;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iStack_5c = *(int *)(*(int *)(param_1 + 8) + 4);
    }
    else if (cVar1 == '\x02') {
      iStack_5c = (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 4;
    }
    else {
      iStack_5c = 1;
    }
  }
  local_60 = 0x100e860c;
  iStack_5c = FUN_100e8766();
  local_20 = (undefined1 *)&local_88;
  local_64 = (undefined8 *)&local_50;
  local_60 = uStack_4c;
  local_74 = param_1;
  local_6c = 0;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x80000000;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    local_6c = (*(undefined4 **)(param_1 + 8))[1];
    local_80 = 0;
    local_78 = 0x80000000;
    local_7c = **(undefined4 **)(param_1 + 8);
  }
  else if (cVar1 == '\x01') {
    local_70 = (undefined4 *)**(undefined4 **)(param_1 + 8);
    local_7c = 0;
    local_78 = 0x80000000;
    local_80 = *local_70;
  }
  else {
    local_68 = 1;
    local_7c = 0;
    local_80 = 0;
    if (cVar1 == '\0') {
      local_78 = 1;
    }
    else {
      local_78 = 0;
    }
  }
  local_84 = param_1;
  local_88 = local_58;
  local_24 = local_58;
  FUN_100e87bb();
  puVar2 = local_24;
  local_20 = local_24;
  if (param_2 != (undefined8 *)&local_50) {
    *(undefined4 *)(local_24 + -4) = 0x100e86e1;
    FUN_100a906a();
    *param_2 = CONCAT44(uStack_4c,local_50);
    *(undefined4 *)(param_2 + 1) = local_48;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
  }
  *(undefined1 **)(puVar2 + -4) = local_44;
  *(undefined4 *)(puVar2 + -8) = 0x100e8709;
  FUN_100e9b22();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x100e8718;
  FUN_1006ae4c();
  ExceptionList = local_1c;
  return;
}

