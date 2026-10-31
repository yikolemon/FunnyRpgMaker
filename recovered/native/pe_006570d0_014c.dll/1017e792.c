/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017e792 */

undefined8 * FUN_1017e792(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 local_64 [44];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  int local_2c;
  undefined8 *local_28;
  undefined8 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_101801d0;
  local_1c = ExceptionList;
  local_34 = *param_2;
  ExceptionList = &local_1c;
  puVar2 = (undefined8 *)FUN_10079ee6(&local_34);
  *param_1 = *puVar2;
  local_24 = param_1 + 1;
  FUN_1000334a(puVar2 + 1);
  local_14 = 1;
  local_28 = param_1 + 4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1017ea00((*(int *)((int)puVar2 + 0x24) - *(int *)(puVar2 + 4) >> 2) * -0x45d1745d,puVar2 + 4,
               (int)puVar2 + 0x24);
  local_14 = 6;
  local_24 = (undefined8 *)FUN_1017ec78(&local_34);
  if (local_24 != (undefined8 *)**(int **)(local_2c + 8)) {
    FUN_1017ddca(*(int *)((int)local_24 + 0x18) - *(int *)((int)local_24 + 0x14) >> 2);
    local_30 = *(undefined4 **)((int)local_24 + 0x18);
    for (local_24 = *(undefined8 **)((int)local_24 + 0x14); local_24 != (undefined8 *)local_30;
        local_24 = (undefined8 *)((int)local_24 + 4)) {
      local_38 = *(undefined4 *)local_24;
      piVar1 = *(int **)(*(int *)(local_2c + 0xc) + 0x24);
      local_14 = 6;
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228590();
      }
      (**(code **)(*piVar1 + 8))(local_64,&local_38);
      local_14 = 7;
      FUN_1017ef56(local_64);
      local_14 = 0xffffffff;
      FUN_1017960a();
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

