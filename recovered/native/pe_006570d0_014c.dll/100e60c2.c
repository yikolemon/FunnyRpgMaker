/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e60c2 */

void FUN_100e60c2(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100eabf0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10061f0c();
  FUN_100620a2();
  ExceptionList = local_10;
  return;
}

