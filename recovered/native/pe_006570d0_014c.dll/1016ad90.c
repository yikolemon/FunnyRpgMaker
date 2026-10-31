/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016ad90 */

void FUN_1016ad90(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_10180220;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_101799fe();
  FUN_10004eae();
  FUN_100431d4();
  FUN_10042460();
  ExceptionList = local_10;
  return;
}

