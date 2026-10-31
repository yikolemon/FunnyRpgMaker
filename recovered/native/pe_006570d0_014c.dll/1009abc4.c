/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009abc4 */

void FUN_1009abc4(undefined4 *param_1)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100c3ca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = Command::Command::vftable;
  local_8 = 0xffffffff;
  FUN_10004eae();
  FUN_1006dc58();
  FUN_10004eae();
  ExceptionList = local_10;
  return;
}

