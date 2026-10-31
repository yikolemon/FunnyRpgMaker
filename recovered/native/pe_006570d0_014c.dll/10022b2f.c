/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022b2f */

void FUN_10022b2f(void)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_10059720;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_100431d4();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

