/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235a40 */

void __fastcall FUN_10235a40(undefined4 param_1)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10289190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  thunk_FUN_10274120(param_1,DAT_10388d00 ^ (uint)&stack0xfffffffc);
  ExceptionList = local_10;
  return;
}

