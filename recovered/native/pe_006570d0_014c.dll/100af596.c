/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af596 */

void FUN_100af596(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c4720;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10001f04();
  local_8 = 0xffffffff;
  FUN_10001f04();
  ExceptionList = local_10;
  return;
}

