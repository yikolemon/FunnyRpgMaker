/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006db34 */

undefined4 * FUN_1006db34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c26d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002db2(param_2,param_3,param_1);
  local_14 = 0;
  *local_24 = std::filesystem::filesystem_error::vftable;
  local_30 = local_24 + 5;
  FUN_10002eb6();
  local_14 = 1;
  local_2c = local_24 + 0xb;
  FUN_10002eb6();
  local_14 = 2;
  local_28 = local_24 + 0x11;
  pcVar1 = "Unknown exception";
  if ((char *)local_24[1] != (char *)0x0) {
    pcVar1 = (char *)local_24[1];
  }
  FUN_10001f66(pcVar1);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

