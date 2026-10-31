/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f8f2 */

void __fastcall FUN_1002f8f2(int *param_1)

{
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100599d0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if ((int *)*param_1 != param_1 + 4) {
    ExceptionList = &local_10;
    local_18 = param_1;
    thunk_FUN_10274120((int *)*param_1);
    ExceptionList = local_10;
  }
  return;
}

