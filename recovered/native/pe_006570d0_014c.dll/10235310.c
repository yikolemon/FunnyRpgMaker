/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235310 */

void __fastcall FUN_10235310(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10288fdd;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  FUN_10259020(param_1 + 1,uVar1,param_1);
  ExceptionList = local_10;
  return;
}

