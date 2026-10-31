/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100164d2 */

void __thiscall FUN_100164d2(int *param_1,int param_2)

{
  int *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10058fa0;
  local_18 = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_18;
    FUN_10016566(param_2);
    local_10 = 0;
    param_2 = param_2 + *param_1;
    local_20 = param_1;
    FUN_1001659a(*param_1,param_2);
    param_1[1] = param_2;
  }
  ExceptionList = local_18;
  return;
}

