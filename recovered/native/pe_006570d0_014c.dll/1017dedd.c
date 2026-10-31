/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017dedd */

void FUN_1017dedd(void)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_10180460;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1017960a();
  local_8 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

