/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086ee1 */

int FUN_10086ee1(int param_1,int param_2,int param_3)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c32d0;
  local_1c = ExceptionList;
  local_28 = param_3;
  local_14 = 0;
  ExceptionList = &local_1c;
  while (param_1 != param_2) {
    local_24 = local_28;
    local_30 = param_1;
    local_2c = param_3;
    FUN_10086fca(param_1);
    param_3 = local_2c + 0x28;
    param_1 = local_30 + 0x28;
  }
  ExceptionList = local_1c;
  return param_3;
}

