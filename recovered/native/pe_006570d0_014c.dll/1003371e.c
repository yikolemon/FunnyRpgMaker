/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003371e */

void FUN_1003371e(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10059aa0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10004eae();
  FUN_1002335e(local_1c + 0x78,*(undefined4 *)(local_1c + 0x78));
  FUN_102283a0(*(undefined4 *)(local_1c + 0x78),0x10);
  FUN_10033626();
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_14;
  return;
}

