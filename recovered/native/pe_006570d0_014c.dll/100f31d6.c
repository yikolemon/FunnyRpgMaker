/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f31d6 */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_100f31d6(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  char local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100f5650;
  local_1c = ExceptionList;
  local_14 = 0;
  local_28 = param_1 + 0x14;
  local_24 = 0;
  local_38 = 0x100f321d;
  ExceptionList = &local_1c;
  local_34 = param_1;
  FUN_100446d6();
  uVar1 = param_4;
  local_24 = '\x01';
  local_14 = 1;
  local_20 = (undefined1 *)&local_44;
  local_2c = (undefined1 *)&local_44;
  local_44 = 0;
  local_40 = 0;
  local_30 = (undefined1 *)&local_34;
  FUN_102353d0(&local_44,&param_2);
  puVar2 = local_2c;
  *(int **)(local_2c + 8) = &local_28;
  puVar2[0xc] = uVar1;
  local_14 = 1;
  FUN_100f330c();
  puVar2 = local_30;
  local_20 = local_30;
  local_14 = 0xffffffff;
  if (local_24 == '\x01') {
    *(int *)(local_30 + -4) = local_28;
    *(undefined4 *)(puVar2 + -8) = 0x100f3299;
    FUN_1022c200();
  }
  *(undefined4 **)(puVar2 + -4) = &param_2;
  *(undefined4 *)(puVar2 + -8) = 0x100f32a5;
  FUN_10235380();
  ExceptionList = local_1c;
  return;
}

