/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ca2c */

void FUN_1005ca2c(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c1f20;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10004eae();
  FUN_10060eb6();
  ExceptionList = local_10;
  return;
}

