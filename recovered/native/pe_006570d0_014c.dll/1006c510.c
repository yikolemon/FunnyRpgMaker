/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c510 */

void __fastcall FUN_1006c510(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c25b0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_10228d00(*(undefined4 *)(param_1 + 0x38));
  FUN_1006c378();
  ExceptionList = local_10;
  return;
}

