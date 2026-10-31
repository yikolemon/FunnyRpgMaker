/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba592 */

int FUN_100ba592(int param_1,int param_2,int param_3)

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
  local_18 = &LAB_100c4bf0;
  local_1c = ExceptionList;
  local_28 = param_3;
  local_14 = 0;
  local_30 = param_2;
  ExceptionList = &local_1c;
  while( true ) {
    bVar1 = local_30 == 0;
    local_30 = local_30 + -1;
    if (bVar1) break;
    local_24 = local_28;
    local_34 = param_1;
    local_2c = param_3;
    FUN_100b9902(param_1);
    param_3 = local_2c + 0x1c;
    param_1 = local_34 + 0x1c;
  }
  ExceptionList = local_1c;
  return param_3;
}

