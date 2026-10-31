/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000515c */

bool FUN_1000515c(void)

{
  undefined1 local_34 [16];
  int local_24;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_34;
  local_10 = 0xffffffff;
  local_14 = &LAB_10012920;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_100051ce();
  local_10 = 0xffffffff;
  FUN_10001134();
  ExceptionList = local_18;
  return local_24 == 0;
}

