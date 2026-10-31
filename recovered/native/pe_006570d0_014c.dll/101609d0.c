/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101609d0 */

void FUN_101609d0(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1016a640;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10187cd0();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x34) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x34));
  }
  if (*(int *)(local_24 + 0x18) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 0x18));
    ExceptionList = local_1c;
  }
  return;
}

