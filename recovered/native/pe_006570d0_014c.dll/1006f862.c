/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006f862 */

void __fastcall FUN_1006f862(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = WolfRPGException::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10001fee();
  *local_18 = std::exception::vftable;
  FUN_10259020(local_18 + 1);
  ExceptionList = local_10;
  return;
}

