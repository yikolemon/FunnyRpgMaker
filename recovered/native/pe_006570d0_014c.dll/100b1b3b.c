/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1b3b */

void __fastcall FUN_100b1b3b(int param_1,int param_2)

{
  void **ppvVar1;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_14 = &LAB_100c1bf0;
  ppvVar1 = &local_18;
  local_18 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x10) {
    local_10 = 0xffffffff;
    local_20 = param_1;
    FUN_10004eae();
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_18;
  return;
}

