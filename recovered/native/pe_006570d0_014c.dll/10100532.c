/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10100532 */

void __fastcall FUN_10100532(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1012ca90;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_100fa2cb(*(int *)(param_1 + 0x20));
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  if (*(int *)(local_18 + 0x14) != 0) {
    FUN_100fa2cb(*(int *)(local_18 + 0x14));
  }
  local_8 = 0xffffffff;
  if (*(int *)(local_18 + 8) == 0) {
    ExceptionList = local_10;
  }
  else {
    FUN_100fa2cb(*(int *)(local_18 + 8));
    ExceptionList = local_10;
  }
  return;
}

