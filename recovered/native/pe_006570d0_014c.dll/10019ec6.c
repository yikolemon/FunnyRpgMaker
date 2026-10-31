/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019ec6 */

void __fastcall FUN_10019ec6(int param_1)

{
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_10059270;
  local_10 = ExceptionList;
  local_1c = param_1 + 0x10;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_10019e92();
  FUN_10019e92();
  ExceptionList = local_10;
  return;
}

