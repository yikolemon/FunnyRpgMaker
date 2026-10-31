/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007db80 */

undefined4 *
FUN_1007db80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  size_t sVar1;
  char *_Str;
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
  local_18 = &LAB_100c2ea0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10002db2(param_4,param_5,param_1);
  local_14 = 0;
  *local_24 = std::filesystem::filesystem_error::vftable;
  local_30 = local_24 + 5;
  FUN_10002e46(param_2);
  local_14 = 1;
  local_2c = local_24 + 0xb;
  FUN_10002e46(param_3);
  local_14 = 2;
  local_28 = local_24 + 0x11;
  _Str = "Unknown exception";
  if ((char *)local_24[1] != (char *)0x0) {
    _Str = (char *)local_24[1];
  }
  sVar1 = _strlen(_Str);
  FUN_10002f22(local_28,_Str,sVar1,param_2,param_3);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

