/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195346 */

void __fastcall FUN_10195346(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_18 = &LAB_10196040;
  local_1c = ExceptionList;
  local_14 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_28 = puVar1 + *(int *)(param_1 + 8);
  ExceptionList = &local_1c;
  local_24 = param_1;
  while (puVar1 != local_28) {
    local_2c = puVar1;
    FUN_100fa2cb(*puVar1);
    puVar1 = local_2c + 1;
  }
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x10) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x10));
    ExceptionList = local_1c;
  }
  return;
}

