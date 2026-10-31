/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100687e5 */

undefined4 * __fastcall
FUN_100687e5(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38;
  char local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  uVar3 = param_4;
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1af0;
  local_1c = ExceptionList;
  local_24 = param_1;
  if (((param_2 == 0) ||
      (iVar4 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 3,
      (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 2) * 0x3cf3cf3d + iVar4 * -0x4f72c235
      != 0)) || ((uint)(iVar4 * 0x4f72c235) <= param_3)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    ExceptionList = &local_1c;
    local_30 = param_2;
    FUN_1006766a(&local_38,&local_30,&param_3);
    if (local_34 == '\0') {
      *local_24 = 0;
      local_24[1] = 0;
      local_24[2] = 0;
    }
    else {
      iVar4 = *(int *)(local_30 + 0x14);
      iVar1 = *(int *)(iVar4 + 0x1c + param_3 * 0x54);
      if (iVar1 == 2) {
        FUN_100687e5(param_3 - 1,uVar3);
      }
      else if (iVar1 == 1) {
        *local_24 = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_14 = 1;
        iVar4 = iVar4 + param_3 * 0x54;
        local_2c = *(int *)(iVar4 + 0x10);
        for (local_28 = *(int *)(iVar4 + 0xc); local_28 != local_2c; local_28 = local_28 + 0x24) {
          local_38 = FUN_1006235a();
          puVar2 = (undefined4 *)local_24[1];
          if (puVar2 == (undefined4 *)local_24[2]) {
            FUN_10051662(puVar2,&local_38);
          }
          else {
            *puVar2 = local_38;
            local_24[1] = local_24[1] + 4;
          }
        }
      }
      else if (iVar1 == 0) {
        *local_24 = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_14 = 0;
        local_2c = *(int *)(*(int *)(local_30 + 0x20) + 100 + param_3 * 0xe8);
        for (local_28 = *(int *)(*(int *)(local_30 + 0x20) + 0x60 + param_3 * 0xe8);
            local_28 != local_2c; local_28 = local_28 + 0x18) {
          local_38 = FUN_1006235a();
          puVar2 = (undefined4 *)local_24[1];
          if (puVar2 == (undefined4 *)local_24[2]) {
            FUN_10051662(puVar2,&local_38);
          }
          else {
            *puVar2 = local_38;
            local_24[1] = local_24[1] + 4;
          }
        }
      }
      else {
        FUN_1006233c();
        FUN_100687e5(iVar1 % 10000,uVar3);
      }
    }
  }
  ExceptionList = local_1c;
  return local_24;
}

