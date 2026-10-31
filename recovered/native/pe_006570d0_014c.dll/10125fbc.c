/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125fbc */

void __fastcall FUN_10125fbc(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1012cb80;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    FUN_100fa2cb(*(int *)(param_1 + 0x10));
    ExceptionList = local_10;
  }
  return;
}

