/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9174 */

void FUN_100a9174(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c43d0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10060b3c();
  FUN_10060b3c();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

