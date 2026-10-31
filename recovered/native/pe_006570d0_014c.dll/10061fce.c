/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061fce */

void __fastcall FUN_10061fce(undefined4 *param_1)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_100c2070;
  local_14 = ExceptionList;
  local_c = 1;
  if (3 < (uint)param_1[5]) {
    ExceptionList = &local_14;
    FUN_10062064(param_1,*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 3;
  *param_1 = 0;
  ExceptionList = local_14;
  return;
}

