/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408f58 */

void __fastcall FUN_00408f58(int param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_004180e0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 8) = std::ios_base::vftable;
  local_18 = param_1;
  FUN_00481d80(param_1 + 8);
  ExceptionList = local_10;
  return;
}

