/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5e0a */

void __thiscall FUN_100b5e0a(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c49d0;
  local_1c = ExceptionList;
  if (param_2 != param_3) {
    local_14 = 0;
    local_24 = param_2;
    ExceptionList = &local_1c;
    local_2c = param_1;
    piVar1 = &local_30;
    if (*(int *)(param_1 + 4) == 0) {
      local_28 = 0;
      local_28 = FUN_10228350(0x24);
      local_24 = (undefined4 *)local_28;
      FUN_100ac424(param_2 + 2);
      *(undefined4 **)(local_2c + 0xc) = local_24;
      *(undefined4 **)(local_2c + 8) = local_24;
      *(int *)(local_2c + 4) = *(int *)(local_2c + 4) + 1;
      param_2 = (undefined4 *)*param_2;
      piVar1 = (int *)local_20;
    }
    while (local_20 = (undefined1 *)piVar1, param_2 != param_3) {
      local_28 = 0;
      local_24 = param_2;
      local_30 = FUN_10228350(0x24);
      local_28 = local_30;
      FUN_100ac424(local_24 + 2);
      **(int **)(local_2c + 8) = local_30;
      *(undefined4 *)(local_30 + 4) = *(undefined4 *)(local_2c + 8);
      *(int *)(local_2c + 8) = local_30;
      *(int *)(local_2c + 4) = *(int *)(local_2c + 4) + 1;
      piVar1 = (int *)local_20;
      param_2 = (undefined4 *)*local_24;
    }
  }
  ExceptionList = local_1c;
  return;
}

