/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075be2 */

undefined4 * __fastcall FUN_10075be2(undefined4 *param_1)

{
  undefined4 uVar1;
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
  local_18 = &LAB_100c2b20;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  local_24 = param_1;
  uVar1 = FUN_1022bce0(1);
  param_1[3] = uVar1;
  local_30 = local_24 + 4;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0xf;
  local_2c = local_24 + 10;
  local_24[10] = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 7;
  local_14 = 2;
  *(undefined2 *)(local_24 + 0x12) = 0;
  *(undefined1 *)((int)local_24 + 0x4a) = 0;
  local_28 = (undefined4 *)FUN_10228350(0x34);
  local_14 = 3;
  FUN_10076012(0);
  *local_28 = std::codecvt_utf8<wchar_t,1114111,0>::vftable;
  local_14 = 2;
  FUN_10075e5c(local_28);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

