/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b536 */

void FUN_1008b536(undefined4 *param_1)

{
  int *piVar1;
  undefined4 ***local_5c;
  int local_58;
  undefined4 ***local_54;
  undefined1 *puStack_50;
  undefined1 *local_4c;
  undefined4 ***local_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  int local_38;
  uint local_34;
  int local_30;
  undefined8 local_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_5c;
  local_18 = &LAB_100c35d0;
  local_1c = ExceptionList;
  local_2c = 0;
  local_24 = (undefined1 *)0x0;
  local_14 = 0;
  ExceptionList = &local_1c;
  if (DAT_1039cbc8 == '\x01') {
    local_20 = (undefined1 *)&local_5c;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc24) {
      local_20 = (undefined1 *)&local_5c;
      FUN_1022c0d0(&DAT_1039cc24);
      if (DAT_1039cc24 == -1) {
        local_14 = 1;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_10080db4);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc24);
      }
    }
    piVar1 = param_1 + 4;
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    local_14 = 0;
    FUN_1007671c(&local_48,param_1,(int)param_1 + *piVar1 * 2);
    local_14 = 3;
    local_5c = &local_48;
    if (0xf < local_34) {
      local_5c = local_48;
    }
    local_54 = (undefined4 ****)0x0;
    puStack_50 = (undefined1 *)0x0;
    local_4c = (undefined1 *)0x0;
    local_58 = (int)local_5c + local_38;
    FUN_10044618(local_38,&local_5c,&local_58);
    local_14 = 4;
    FUN_10004eae();
    local_2c._0_4_ = (undefined4 ****)local_54;
    local_2c._4_4_ = puStack_50;
    local_24 = local_4c;
    local_54 = (undefined4 ***)0x0;
    puStack_50 = (undefined1 *)0x0;
    local_4c = (undefined1 *)0x0;
    local_14 = 0xffffffff;
    FUN_10004eae();
    local_54 = (undefined4 ***)((uint)local_54 & 0xffffff00);
    if (local_2c._4_4_ == local_24) {
      local_14 = 3;
      FUN_1004cf34(local_2c._4_4_,&local_54);
    }
    else {
      *local_2c._4_4_ = 0;
      local_2c._4_4_ = local_2c._4_4_ + 1;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  else {
    FUN_1008ba7e(&local_48,param_1);
    local_14 = 2;
    FUN_10004eae();
    local_2c._0_4_ = (undefined4 ****)local_48;
    local_2c._4_4_ = puStack_44;
    local_24 = local_40;
    local_48 = (undefined4 ***)0x0;
    puStack_44 = (undefined1 *)0x0;
    local_40 = (undefined1 *)0x0;
    local_14 = 0xffffffff;
    FUN_10004eae();
  }
  local_48 = (undefined4 ***)(local_2c._4_4_ + -(int)(undefined4 ****)local_2c);
  local_30 = local_30 + 0x38;
  local_14 = 0;
  FUN_1008b9b2(&local_48);
  local_48 = (undefined4 ***)0xffffffff;
  FUN_1008bcec(&local_2c,&local_48);
  local_14 = 0xffffffff;
  FUN_10004eae();
  ExceptionList = local_1c;
  return;
}

