/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012c87c */

void FUN_1012c87c(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012cbc0;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10187cd0();
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

