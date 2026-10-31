/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dea74 */

undefined4 * __thiscall FUN_100dea74(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c [2];
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_2c;
  local_24 = param_2;
  local_18 = &LAB_100ea900;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = 0;
  local_2c[0] = param_1;
  puVar1 = (undefined4 *)FUN_10228350(0x10);
  puVar1[1] = 1;
  puVar1[2] = 1;
  *puVar1 = std::_Ref_count<EngineUI>::vftable;
  puVar1[3] = local_24;
  *local_2c[0] = local_24;
  local_2c[0][1] = puVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_2c[0];
}

