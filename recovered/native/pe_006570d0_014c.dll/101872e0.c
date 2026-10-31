/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101872e0 */

void FUN_101872e0(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10195fb0;
  local_1c = ExceptionList;
  local_14 = 8;
  ExceptionList = &local_1c;
  FUN_10187576();
  FUN_10187224(0);
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0xa4) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0xa4));
  }
  if (*(int *)(local_24 + 0x98) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x98));
  }
  if (*(int *)(local_24 + 0x8c) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x8c));
  }
  local_14 = 0;
  FUN_10187cd0();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x80) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x80));
  }
  if (*(int *)(local_24 + 0x40) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x40));
  }
  if (*(int *)(local_24 + 0x20) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x20));
  }
  if (*(int *)(local_24 + 0x14) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x14));
  }
  if (*(int *)(local_24 + 8) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 8));
    ExceptionList = local_1c;
  }
  return;
}

