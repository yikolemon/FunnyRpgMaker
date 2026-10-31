/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001000 */

bool FUN_10001000(void)

{
  undefined1 local_34 [16];
  int local_24;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_34;
  local_10 = 0xffffffff;
  local_14 = &LAB_10004ef0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10001072();
  local_10 = 0xffffffff;
  FUN_10001134();
  ExceptionList = local_18;
  return local_24 == 0;
}

