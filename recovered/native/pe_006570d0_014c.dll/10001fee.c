/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001fee */

void FUN_10001fee(void)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_10004fc0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_10004e60();
  ExceptionList = local_10;
  return;
}

