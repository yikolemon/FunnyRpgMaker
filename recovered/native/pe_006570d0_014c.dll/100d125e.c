/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d125e */

void __fastcall FUN_100d125e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *local_68;
  undefined8 local_64;
  undefined1 *local_5c;
  int local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  char *local_48;
  undefined4 uStack_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb60;
  local_20 = ExceptionList;
  if (*(int *)(param_3 + 0x10) != 0) {
    local_48 = "$gameVariables._data[{}] = {};";
    uStack_44 = 0x1e;
    local_64 = 0x1e1033d47e;
    local_58 = param_3;
    local_5c = local_50;
    ExceptionList = &local_20;
    local_68 = local_40;
    local_4c = param_2;
    FUN_100d216a();
    local_18 = 0;
    local_68 = local_40;
    FUN_10014730();
    local_18 = 0xffffffff;
    FUN_10001fee();
  }
  ExceptionList = local_20;
  return;
}

