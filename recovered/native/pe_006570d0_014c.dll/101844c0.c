/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101844c0 */

void FUN_101844c0(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10186160;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10004eae();
  FUN_1018466c(local_1c + 4,*(undefined4 *)(local_1c + 4));
  FUN_102283a0(*(undefined4 *)(local_1c + 4),0x18);
  ExceptionList = local_14;
  return;
}

