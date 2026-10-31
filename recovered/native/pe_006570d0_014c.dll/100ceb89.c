/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ceb89 */

int * FUN_100ceb89(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_50 [4];
  uint *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  uint *local_2c;
  undefined1 *local_28;
  void *local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined4 local_14;
  
  local_28 = auStack_50;
  local_14 = 0xffffffff;
  local_18 = &DAT_10375ed8;
  local_1c = &LAB_10259150;
  local_20 = ExceptionList;
  local_38 = (int *)0x0;
  ExceptionList = &local_20;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_4c = (uint *)FUN_100ce8ed(param_1);
  local_34 = (int *)0x0;
  if (local_4c != (uint *)0x0) {
    local_2c = local_4c;
    if ((*local_4c < 0x40) || (local_4c[1] != 0x727444)) {
      local_14 = 0;
      SetLastError(0xbf);
      local_34 = (int *)0x0;
    }
    else {
      local_48 = (int *)((int)local_4c + local_4c[2]);
      local_44 = (int *)((int)local_4c + local_4c[3]);
      local_38 = local_48;
      do {
        if (local_44 <= local_38) {
          local_14 = 0;
          SetLastError(6);
          ExceptionList = local_20;
          return (int *)0x0;
        }
        local_30 = local_38;
        local_14 = 0;
        iVar1 = FUN_100f870c(local_38 + 2,param_2);
        if (iVar1 == 0) {
          local_38 = (int *)((int)local_30 + *local_30);
          local_3c = 0;
        }
        else {
          if (param_3 != (int *)0x0) {
            *param_3 = *local_30 + -0x18;
          }
          SetLastError(0);
          local_40 = local_30 + 6;
          local_3c = 1;
        }
      } while (local_3c == 0);
      local_34 = local_40;
    }
  }
  ExceptionList = local_20;
  return local_34;
}

