/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10169678 */

void FUN_10169678(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1016a660;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10187cd0();
  local_14 = 0xffffffff;
  if (*(int *)(local_24 + 0x78) != 0) {
    FUN_100fa2cb(*(int *)(local_24 + 0x78));
  }
  if (*(int *)(local_24 + 100) == 0) {
    ExceptionList = local_1c;
  }
  else {
    FUN_100fa2cb(*(int *)(local_24 + 100));
    ExceptionList = local_1c;
  }
  return;
}

