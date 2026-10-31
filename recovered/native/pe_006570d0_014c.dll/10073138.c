/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073138 */

void FUN_10073138(void)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c28f0;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10077948();
  *(undefined4 *)(local_24 + 0x14) = 0;
  local_14 = 0xffffffff;
  FUN_10004eae();
  ExceptionList = local_1c;
  return;
}

