/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ebdc3 */

int FUN_100ebdc3(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100ec080;
  local_1c = ExceptionList;
  local_28 = param_3;
  local_14 = 0;
  local_2c = param_2;
  ExceptionList = &local_1c;
  while( true ) {
    bVar1 = local_2c == 0;
    local_2c = local_2c + -1;
    if (bVar1) break;
    local_24 = local_28;
    local_34 = param_3;
    local_30 = param_1;
    FUN_100aff7a(param_3,param_1);
    param_3 = local_34 + 0x20;
    param_1 = local_30 + 0x20;
  }
  ExceptionList = local_1c;
  return param_3;
}

