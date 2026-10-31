/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b27a */

undefined4 * FUN_1007b27a(uint param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c2da0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_1007418e();
  *local_1c = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_1c[0xe] = 0;
  local_1c[0xf] =
       (param_1 & 8) + (param_1 & 4) * 4 |
       (uint)((byte)((~(byte)param_1 & 2) << 5 | ~(byte)param_1 << 7) >> 5);
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

