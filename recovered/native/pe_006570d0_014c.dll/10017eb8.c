/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017eb8 */

undefined4 * __thiscall FUN_10017eb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_10059130;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = std::exception::vftable;
  local_28 = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_14 = 0;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  param_1[3] = param_2;
  local_24 = param_1;
  FUN_1000648a(param_3);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

