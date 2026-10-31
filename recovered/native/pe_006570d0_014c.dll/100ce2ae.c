/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce2ae */

void __fastcall FUN_100ce2ae(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100ce570;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    ExceptionList = &local_10;
    local_18 = param_1;
    FUN_102283a0(*(int *)(param_1 + 4),0x30);
    ExceptionList = local_10;
  }
  return;
}

