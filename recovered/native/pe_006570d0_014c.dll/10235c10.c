/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235c10 */

int __thiscall FUN_10235c10(int param_1,byte param_2)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10289048;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0xffffffff;
  *(undefined ***)(param_1 + 0x5c) = std::exception::vftable;
  FUN_10259020(param_1 + 0x60,uVar1);
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x68);
  }
  ExceptionList = local_10;
  return param_1;
}

