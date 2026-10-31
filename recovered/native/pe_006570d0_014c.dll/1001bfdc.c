/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001bfdc */

void __fastcall FUN_1001bfdc(int param_1)

{
  undefined4 *puVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10059310;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if ((*(int **)(param_1 + 0xc) != (int *)0x0) &&
     (ExceptionList = &local_10, local_18 = param_1,
     puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xc) + 8))(),
     puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

