/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017ba8 */

undefined4 * FUN_10017ba8(undefined4 param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059100;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_10017eb8(param_1,param_2);
  *local_20 = nlohmann::json_abi_v3_12_0::detail::type_error::vftable;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

