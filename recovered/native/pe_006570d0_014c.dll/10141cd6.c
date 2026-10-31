/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141cd6 */

void __fastcall FUN_10141cd6(int param_1)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10156200;
  local_1c = ExceptionList;
  local_14 = 2;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_10141def(*(undefined4 *)(param_1 + 4));
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x38) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x38));
  }
  if (*(int *)(local_24 + 0x2c) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x2c));
  }
  if (*(int *)(local_24 + 0x20) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x20));
    ExceptionList = local_1c;
  }
  return;
}

