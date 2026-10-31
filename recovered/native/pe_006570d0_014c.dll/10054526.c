/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054526 */

undefined4 * FUN_10054526(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_1005ab60;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_10017eb8(param_1,param_3);
  *local_20 = nlohmann::json_abi_v3_12_0::detail::parse_error::vftable;
  local_20[7] = param_2;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

