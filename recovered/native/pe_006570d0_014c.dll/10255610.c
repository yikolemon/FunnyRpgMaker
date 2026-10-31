/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10255610 */

undefined4 * __thiscall FUN_10255610(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10289435;
  local_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  param_1[1] = param_3;
  *param_1 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 1;
  FUN_10257820(0,param_2);
  uVar2 = FUN_10258080(uVar1);
  param_1[5] = uVar2;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

