/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233130 */

void __fastcall FUN_10233130(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10288d00;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *param_1 = std::ios_base::vftable;
  FUN_1022dae0(param_1,uVar1);
  ExceptionList = local_10;
  return;
}

