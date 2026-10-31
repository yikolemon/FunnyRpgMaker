/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073366 */

undefined4 * __fastcall FUN_10073366(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *param_1 = std::ios_base::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

