/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e122a */

void FUN_100e122a(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100ea920;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10004eae();
  FUN_10022d3c(local_1c + 0x10,*(undefined4 *)(local_1c + 0x10));
  FUN_102283a0(*(undefined4 *)(local_1c + 0x10),0x24);
  FUN_100e1328();
  ExceptionList = local_14;
  return;
}

