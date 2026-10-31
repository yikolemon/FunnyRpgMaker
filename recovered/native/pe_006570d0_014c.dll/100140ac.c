/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100140ac */

void __fastcall FUN_100140ac(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10058ef0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10001fee();
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  FUN_10013efc();
  ExceptionList = local_10;
  return;
}

