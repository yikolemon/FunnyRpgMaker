/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235280 */

void FUN_10235280(undefined4 param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10288f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_102332c0(param_1);
  ExceptionList = local_10;
  return;
}

