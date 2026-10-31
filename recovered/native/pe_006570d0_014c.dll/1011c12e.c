/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c12e */

void FUN_1011c12e(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_1012cb60;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1011c214();
  ExceptionList = local_10;
  return;
}

