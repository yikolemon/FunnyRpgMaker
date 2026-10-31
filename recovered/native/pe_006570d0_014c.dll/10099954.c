/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10099954 */

void FUN_10099954(void)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100c3c00;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10004eae();
  ExceptionList = local_10;
  return;
}

