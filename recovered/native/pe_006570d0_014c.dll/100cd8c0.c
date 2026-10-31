/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd8c0 */

void __fastcall FUN_100cd8c0(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100ce530;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    FUN_102283a0(*(int *)(param_1 + 4),0x14);
    ExceptionList = local_10;
  }
  return;
}

