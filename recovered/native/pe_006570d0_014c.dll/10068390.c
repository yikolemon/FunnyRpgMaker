/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10068390 */

undefined4 FUN_10068390(void)

{
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c22f0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1006852e();
  ExceptionList = local_14;
  return local_1c;
}

