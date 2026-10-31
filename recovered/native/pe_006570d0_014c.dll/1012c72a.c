/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c72a */

void __fastcall FUN_1012c72a(int param_1)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012cbb0;
  local_1c = ExceptionList;
  local_14 = 3;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_100fa2cb(*(undefined4 *)(param_1 + 8));
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x1a4) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x1a4));
  }
  if (*(int *)(local_24 + 0x18c) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x18c));
  }
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x164) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x164));
    ExceptionList = local_1c;
  }
  return;
}

