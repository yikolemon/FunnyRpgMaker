/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac1d0 */

void __fastcall FUN_101ac1d0(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_101bcef0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x108) != 0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    FUN_100fa2cb(*(int *)(param_1 + 0x108));
    ExceptionList = local_10;
  }
  return;
}

