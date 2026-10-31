/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018a12 */

void FUN_10018a12(void)

{
  undefined4 *puVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100591e0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_10020804();
  local_8 = 0xffffffff;
  if ((*(int **)(local_18 + 0x10) != (int *)0x0) &&
     (puVar1 = (undefined4 *)(**(code **)(**(int **)(local_18 + 0x10) + 8))(),
     puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

