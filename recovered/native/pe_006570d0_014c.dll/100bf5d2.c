/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bf5d2 */

void __fastcall FUN_100bf5d2(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c4ca0;
  local_10 = ExceptionList;
  local_18 = *(int *)(param_1 + 0xc);
  if (local_18 != 0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    thunk_FUN_10274120(local_18);
    ExceptionList = local_10;
  }
  return;
}

