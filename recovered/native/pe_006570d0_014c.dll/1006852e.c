/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006852e */

undefined4 FUN_1006852e(void)

{
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c2310;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10068592();
  ExceptionList = local_14;
  return local_1c;
}

