/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b83fd */

int FUN_100b83fd(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_25;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = &LAB_100c4b50;
  local_1c = ExceptionList;
  local_2c = param_3;
  local_14 = 0;
  local_34 = param_2;
  ExceptionList = &local_1c;
  while( true ) {
    bVar1 = local_34 == 0;
    local_34 = local_34 + -1;
    if (bVar1) break;
    local_24 = local_2c;
    local_38 = param_1;
    local_30 = param_3;
    FUN_100b84f6(param_1,&local_25);
    param_3 = local_30 + 0x18;
    param_1 = local_38 + 0x18;
  }
  ExceptionList = local_1c;
  return param_3;
}

