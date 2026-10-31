/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100edf7c */

void __fastcall FUN_100edf7c(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100f51d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100edbbd(*(int *)(param_1 + 4) + 0x10);
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  local_8 = 0xffffffff;
  if (*(int *)(local_18 + 4) == 0) {
    ExceptionList = local_10;
  }
  else {
    FUN_102283a0(*(int *)(local_18 + 4),0x24);
    ExceptionList = local_10;
  }
  return;
}

