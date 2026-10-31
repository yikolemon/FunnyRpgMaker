/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8f90 */

void FUN_100c8f90(int param_1)

{
  char cVar1;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_18 = &LAB_100cc2d0;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 1;
  cVar1 = FUN_1001a44b(&param_1,0);
  if (cVar1 == '\0') {
    FUN_100c907a(local_2c,param_1 + 8);
    FUN_10022702(&param_1);
  }
  FUN_1002265a(&param_1);
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  FUN_100431d4();
  ExceptionList = local_1c;
  return;
}

