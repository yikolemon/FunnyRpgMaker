/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10100bae */

void __fastcall FUN_10100bae(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1012cb00;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_100fa2cb(*(int *)(param_1 + 0xbc));
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  if (*(int *)(local_18 + 0xb0) != 0) {
    FUN_100fa2cb(*(int *)(local_18 + 0xb0));
  }
  if (*(int *)(local_18 + 0xa4) == 0) {
    ExceptionList = local_10;
  }
  else {
    FUN_100fa2cb(*(int *)(local_18 + 0xa4));
    ExceptionList = local_10;
  }
  return;
}

