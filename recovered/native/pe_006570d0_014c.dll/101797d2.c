/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101797d2 */

void FUN_101797d2(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_101802a0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1017960a();
  local_8 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

