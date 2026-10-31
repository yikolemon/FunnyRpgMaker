/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480da0 */

void __fastcall FUN_00480da0(undefined4 *param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004a7120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = std::ios_base::vftable;
  FUN_00481d80((int)param_1);
  ExceptionList = local_10;
  return;
}

