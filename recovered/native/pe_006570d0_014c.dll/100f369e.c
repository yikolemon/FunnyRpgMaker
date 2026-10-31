/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f369e */

void FUN_100f369e(void)

{
  undefined1 auStack_2c [12];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_2c;
  local_18 = &LAB_100f56a0;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_100f378e();
  FUN_100f4410();
  ExceptionList = local_1c;
  return;
}

