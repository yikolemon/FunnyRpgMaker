/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044618 */

void __thiscall FUN_10044618(int *param_1,int param_2,int *param_3,int *param_4)

{
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a670;
  local_1c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_1c;
    FUN_10016566(param_2);
    local_14 = 0;
    local_30 = *param_1;
    local_2c = *param_4;
    local_28 = *param_3;
    local_34 = param_1;
    local_24 = param_1;
    thunk_FUN_1000b6c9(local_28,local_2c,local_30);
    local_34[1] = local_30 + (local_2c - local_28);
  }
  ExceptionList = local_1c;
  return;
}

