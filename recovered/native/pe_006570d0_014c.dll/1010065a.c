/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010065a */

void __fastcall FUN_1010065a(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1012caa0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_100fa2cb(*(int *)(param_1 + 0x2c));
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  if (*(int *)(local_18 + 0x20) != 0) {
    FUN_100fa2cb(*(int *)(local_18 + 0x20));
  }
  if (*(int *)(local_18 + 8) == 0) {
    ExceptionList = local_10;
  }
  else {
    FUN_100fa2cb(*(int *)(local_18 + 8));
    ExceptionList = local_10;
  }
  return;
}

