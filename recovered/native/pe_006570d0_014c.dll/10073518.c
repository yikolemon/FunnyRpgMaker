/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073518 */

undefined4 * FUN_10073518(void)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c2940;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_1007418e();
  *local_1c = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)(local_1c + 0x12) = 0;
  *(undefined1 *)((int)local_1c + 0x3d) = 0;
  local_1c[3] = local_1c + 1;
  local_1c[4] = local_1c + 2;
  local_1c[7] = local_1c + 5;
  local_1c[8] = local_1c + 6;
  local_1c[0xb] = local_1c + 9;
  local_1c[0xc] = local_1c + 10;
  local_1c[2] = 0;
  local_1c[6] = 0;
  local_1c[10] = 0;
  local_1c[1] = 0;
  local_1c[5] = 0;
  local_1c[9] = 0;
  local_1c[0x13] = 0;
  uVar1 = DAT_1039cbbc;
  local_1c[0x11] = DAT_1039cbc0;
  local_1c[0x10] = uVar1;
  local_1c[0xe] = 0;
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

