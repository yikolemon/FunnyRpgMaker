/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003a070 */

void __thiscall FUN_1003a070(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059e60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1003a106(param_2[1],param_1 + 4,param_4);
  local_14 = 0;
  FUN_1001909c(*param_2,param_2[1] + *param_2);
  local_14 = 0xffffffff;
  FUN_1003a17a();
  ExceptionList = local_1c;
  return;
}

