/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ae4c */

void FUN_1006ae4c(void)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2460;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  FUN_10004eae();
  FUN_10022d3c(local_1c + 0x10,*(undefined4 *)(local_1c + 0x10));
  FUN_102283a0(*(undefined4 *)(local_1c + 0x10),0x24);
  FUN_100a906a();
  ExceptionList = local_14;
  return;
}

