/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10094888 */

void FUN_10094888(void)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c3a40;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  local_20 = (undefined4 *)FUN_10228350(0x20);
  local_20[1] = DAT_1028f5b4;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  *local_20 = std::_Node_str<wchar_t>::vftable;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_10 = 0xffffffff;
  FUN_1001d4f8(local_20);
  *unaff_FS_OFFSET = local_18;
  return;
}

