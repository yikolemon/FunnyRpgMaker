/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006bdd3 */

undefined4 * FUN_1006bdd3(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2520;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = (undefined4 *)FUN_10228350(0x50);
  local_24[1] = 1;
  local_24[2] = 1;
  *local_24 = std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::vftable;
  local_28 = local_24 + 4;
  local_14 = 0;
  FUN_1006c196(param_2,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_28;
  param_1[1] = local_24;
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

