/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0106 */

void FUN_100d0106(int *param_1)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100d0720;
  local_14 = ExceptionList;
  local_1c = *param_1;
  if (local_1c != 0) {
    local_c = 0xffffffff;
    ExceptionList = &local_14;
    thunk_FUN_10274120(local_1c);
    *param_1 = 0;
  }
  ExceptionList = local_14;
  return;
}

