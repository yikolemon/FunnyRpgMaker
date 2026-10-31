/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2158 */

void FUN_100f2158(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100f5520;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_100f072e();
  FUN_100ef9e6();
  ExceptionList = local_10;
  return;
}

