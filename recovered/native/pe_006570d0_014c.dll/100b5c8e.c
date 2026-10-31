/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5c8e */

void __thiscall FUN_100b5c8e(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void **ppvVar5;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c49c0;
  puVar1 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)*puVar1;
  ppvVar5 = &local_1c;
  local_34 = param_1;
  local_1c = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar5;
    local_24 = local_34;
    if (puVar2 == puVar1) {
      local_30 = 0;
      local_2c = (int *)0x0;
      local_28 = 0;
      local_14 = 0;
      FUN_100b5e0a(param_2,param_3);
      if (local_30 != 0) {
        iVar3 = *local_24;
        piVar4 = *(int **)(iVar3 + 4);
        *(int **)(local_28 + 4) = piVar4;
        *piVar4 = local_28;
        *local_2c = iVar3;
        *(int **)(iVar3 + 4) = local_2c;
        local_24[1] = local_24[1] + local_30;
        local_30 = 0;
      }
      local_14 = 0xffffffff;
      FUN_100b5f36();
      ExceptionList = local_1c;
      return;
    }
    if (param_2 == param_3) break;
    FUN_100b5fc6(param_2 + 2);
    param_2 = (undefined4 *)*param_2;
    puVar2 = (undefined4 *)*puVar2;
    ppvVar5 = ExceptionList;
    local_34 = local_24;
  }
  FUN_100b5f74(puVar2,puVar1);
  ExceptionList = local_1c;
  return;
}

