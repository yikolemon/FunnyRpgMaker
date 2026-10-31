/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001cc9c */

void FUN_1001cc9c(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100593e0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1001cf94();
  ExceptionList = local_10;
  return;
}

