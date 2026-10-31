/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ac3f */

undefined4 * FUN_1006ac3f(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2450;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = (undefined4 *)FUN_10228350(0x210);
  local_24[1] = 1;
  local_24[2] = 1;
  local_26 = 0;
  local_25 = 0;
  *local_24 = std::_Ref_count_obj2<WolfRPG>::vftable;
  local_2c = local_24 + 3;
  local_14 = 0;
  FUN_1006de58(param_2,&local_25,&local_26);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_2c;
  param_1[1] = local_24;
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

