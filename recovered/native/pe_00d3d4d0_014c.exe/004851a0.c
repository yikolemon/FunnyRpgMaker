/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004851a0 */

undefined4 __cdecl
FUN_004851a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_1c;
  undefined *local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = (uint)&local_1c ^ DAT_0050e8c0;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &DAT_004853e0;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return uVar1;
}

