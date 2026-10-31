/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009cde0 */

void FUN_1009cde0(void)

{
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = local_18;
  local_c = &LAB_100c3e00;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10001134();
  FUN_1009cee2();
  FUN_1009d09e();
  FUN_10001134();
  FUN_10001134();
  ExceptionList = local_10;
  return;
}

