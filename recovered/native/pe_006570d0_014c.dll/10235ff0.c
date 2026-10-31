/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235ff0 */

void __fastcall FUN_10235ff0(int param_1)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10288fa8;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = std::exception::vftable;
  FUN_10259020(param_1 + 0x60,uVar1,(undefined4 *)(param_1 + 0x5c),param_1);
  ExceptionList = local_10;
  return;
}

