/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073086 */

void __fastcall FUN_10073086(int param_1)

{
  int *piVar1;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c28e0;
  local_1c = ExceptionList;
  local_14 = 1;
  ExceptionList = &local_1c;
  local_24 = param_1;
  piVar1 = &local_28;
  if (*(int *)(param_1 + 0x74) != 0) {
    local_28 = param_1 + 0x10;
    FUN_1007e8ce();
    piVar1 = (int *)local_20;
  }
  local_20 = (undefined1 *)piVar1;
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_100732dc();
  ExceptionList = local_1c;
  return;
}

