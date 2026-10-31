/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080804 */

undefined4 FUN_10080804(void)

{
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c30a0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10080e50(0);
  ExceptionList = local_18;
  return local_20;
}

