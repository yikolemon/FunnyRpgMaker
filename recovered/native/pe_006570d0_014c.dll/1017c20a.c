/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017c20a */

undefined4 __fastcall FUN_1017c20a(char *param_1,int param_2)

{
  undefined4 uVar1;
  uint local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)local_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180190;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if (*(int *)(param_2 + 4) == 0) {
    if (*param_1 == '\x04') {
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_100dc592(param_1,local_50);
      uVar1 = CONCAT31((int3)((uint)local_50 >> 8),(undefined1)local_50[0]);
    }
    else {
      uVar1 = 0;
    }
  }
  else if (*param_1 == '\x01') {
    local_40 = 0;
    local_3c = 0;
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)local_50;
    FUN_1004b3be(0);
    local_18 = 0;
    FUN_100d9294(local_50,param_2,local_38);
    local_18 = 1;
    uVar1 = FUN_1017c20a();
    local_18 = 0xffffffff;
    FUN_10013efc();
    FUN_10013efc();
  }
  else {
    local_50[0] = 0;
    local_50[1] = 0;
    local_28 = &stack0xfffffffc;
    local_24 = (undefined1 *)local_50;
    uVar1 = FUN_1017c20a();
  }
  ExceptionList = local_20;
  return uVar1;
}

