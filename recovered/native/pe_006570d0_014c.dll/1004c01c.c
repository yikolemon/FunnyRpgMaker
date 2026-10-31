/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004c01c */

void FUN_1004c01c(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_1005a820;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10001fee();
  FUN_10004eae();
  ExceptionList = local_10;
  return;
}

