/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bf54c */

void __fastcall FUN_100bf54c(int *param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c4c90;
  local_10 = ExceptionList;
  if (((char)param_1[2] == '\x01') && (local_18 = *param_1, local_18 != 0)) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    thunk_FUN_10274120(local_18);
    ExceptionList = local_10;
  }
  return;
}

