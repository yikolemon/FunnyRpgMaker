/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10060a89 */

void FUN_10060a89(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c1f30;
  local_10 = ExceptionList;
  local_18 = param_1 + 4;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10004eae();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

