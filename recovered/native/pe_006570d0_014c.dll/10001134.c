/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001134 */

void __fastcall FUN_10001134(undefined4 *param_1)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_10004f20;
  local_14 = ExceptionList;
  local_c = 1;
  if (7 < (uint)param_1[5]) {
    ExceptionList = &local_14;
    FUN_100017aa(param_1,*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  ExceptionList = local_14;
  return;
}

