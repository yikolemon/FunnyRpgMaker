/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a49ca */

void FUN_100a49ca(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c41b0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10004eae();
  FUN_10004eae();
  FUN_100a4aac();
  FUN_10001134();
  ExceptionList = local_10;
  return;
}

