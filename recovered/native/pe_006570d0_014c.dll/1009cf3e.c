/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009cf3e */

void FUN_1009cf3e(void)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100c3e10;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_1006dc58();
  FUN_10004eae();
  FUN_10001134();
  ExceptionList = local_10;
  return;
}

