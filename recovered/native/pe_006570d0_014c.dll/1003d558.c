/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d558 */

void __thiscall FUN_1003d558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_34 [20];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a0c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar1 = FUN_10024178();
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_1003a106(0,param_1 + 4,param_4);
    local_14 = 0xffffffff;
    FUN_1003a17a();
    ExceptionList = local_1c;
  }
  else {
    FUN_1003d5f4(iVar1,param_4);
    ExceptionList = local_1c;
  }
  return;
}

