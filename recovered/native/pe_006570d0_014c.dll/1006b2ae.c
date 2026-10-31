/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b2ae */

void FUN_1006b2ae(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c2480;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1006ae4c();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

