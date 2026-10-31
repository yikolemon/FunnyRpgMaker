/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008729c */

void __thiscall FUN_1008729c(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_25;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3320;
  local_1c = ExceptionList;
  if (param_3 != param_4) {
    local_34 = param_4 - param_3;
    local_2c = (local_34 >> 3) * 0x33333333;
    local_30 = param_3 - *param_1;
    ExceptionList = &local_1c;
    while( true ) {
      iVar1 = param_3 + local_34;
      local_24 = param_3;
      if (iVar1 == param_1[1]) break;
      local_14 = 0xffffffff;
      FUN_1007f222();
      param_3 = local_24;
      FUN_10001fee();
      FUN_100873a8(iVar1);
      param_3 = param_3 + 0x28;
    }
    FUN_10087482((iVar1 - *param_1 >> 3) * -0x33333333 + local_2c,&local_25);
    param_3 = local_30 + *param_1;
  }
  *param_2 = param_3;
  ExceptionList = local_1c;
  return;
}

