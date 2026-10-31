/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001cd94 */

undefined4 * __thiscall FUN_1001cd94(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059400;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  puVar1 = (undefined4 *)FUN_10228350(0x24);
  puVar1[1] = DAT_1028f560;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = std::_Root_node::vftable;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  param_1[2] = param_3;
  param_1[3] = param_2;
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

