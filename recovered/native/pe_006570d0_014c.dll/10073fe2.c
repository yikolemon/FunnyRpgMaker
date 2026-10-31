/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073fe2 */

void __fastcall FUN_10073fe2(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2a10;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 8) = std::ios_base::vftable;
  local_18 = param_1;
  FUN_1022dae0(param_1 + 8);
  ExceptionList = local_10;
  return;
}

