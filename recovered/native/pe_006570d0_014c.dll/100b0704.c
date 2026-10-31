/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b0704 */

void FUN_100b0704(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c4810;
  local_10 = ExceptionList;
  local_18 = param_1 + 0x18;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_100acbd4();
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

