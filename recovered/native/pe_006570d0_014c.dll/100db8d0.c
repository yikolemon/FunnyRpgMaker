/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100db8d0 */

undefined4 * __fastcall FUN_100db8d0(undefined4 *param_1,char *param_2,int param_3)

{
  undefined1 auStack_58 [4];
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_58;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddcf0;
  local_20 = ExceptionList;
  local_54 = param_1;
  if (*(int *)(param_3 + 4) == 0) {
    if (*param_2 != '\x03') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0xf;
      return param_1;
    }
    ExceptionList = &local_20;
    FUN_100173ea(param_1,(undefined1)local_50);
    local_54 = param_1;
  }
  else if (*param_2 == '\x01') {
    local_40 = 0;
    local_3c = 0;
    ExceptionList = &local_20;
    local_28 = &stack0xfffffffc;
    local_24 = auStack_58;
    FUN_1004b3be(0);
    local_18 = 0;
    FUN_100d9294(&local_50,param_3,local_38);
    local_18 = 1;
    FUN_100db8d0(&local_40);
    local_18 = 0xffffffff;
    FUN_10013efc();
    FUN_10013efc();
  }
  else {
    local_50 = 0;
    local_4c = 0;
    ExceptionList = &local_20;
    local_28 = &stack0xfffffffc;
    local_24 = auStack_58;
    FUN_100db8d0(&local_50);
    local_54 = param_1;
  }
  ExceptionList = local_20;
  return local_54;
}

