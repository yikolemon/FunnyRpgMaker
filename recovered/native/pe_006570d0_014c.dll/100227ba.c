/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100227ba */

void FUN_100227ba(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100596f0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10004eae();
  FUN_10022d3c(local_1c + 4,*(undefined4 *)(local_1c + 4));
  FUN_102283a0(*(undefined4 *)(local_1c + 4),0x24);
  ExceptionList = local_14;
  return;
}

