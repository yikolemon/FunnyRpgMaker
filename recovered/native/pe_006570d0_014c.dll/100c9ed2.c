/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9ed2 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x100c9f7e) */

void __thiscall FUN_100c9ed2(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 local_34;
  int *local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100cc3c0;
  local_1c = ExceptionList;
  local_14 = 0;
  local_28 = param_1 + 3;
  local_34 = 0x100c9f15;
  ExceptionList = &local_1c;
  local_30 = param_1;
  FUN_100446d6();
  local_20 = (undefined1 *)&local_34;
  local_24 = param_2;
  local_34 = param_2;
  local_14 = 1;
  local_2c = (undefined1 *)&local_30;
  (**(code **)(*local_30 + 0x20))();
  puVar1 = local_2c;
  local_20 = local_2c;
  local_14 = 0xffffffff;
  *(int **)(local_2c + -4) = local_28;
  *(undefined4 *)(puVar1 + -8) = 0x100c9f71;
  FUN_1022c200();
  ExceptionList = local_1c;
  return;
}

