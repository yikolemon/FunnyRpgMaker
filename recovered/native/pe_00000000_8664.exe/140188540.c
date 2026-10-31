/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140188540(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_1401930f8(2);
  _DAT_140f2b150 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_140f2b158 = 0;
  _DAT_140f2b160 = 0;
  _DAT_140f2b168 = (undefined *)0x0;
  _DAT_140f2b170 = (undefined *)0x0;
  _DAT_140f2b178 = 0;
  _DAT_140f2b180 = 0;
  _DAT_140f2b188 = (undefined *)0x0;
  _DAT_140f2b190 = (undefined *)0x0;
  _DAT_140f2b198 = 0;
  _DAT_140f2b1a0 = (undefined *)0x0;
  _DAT_140f2b1a8 = (undefined *)0x0;
  lVar2 = FUN_1401887b0(0x10);
  if (lVar2 == 0) {
    _DAT_140f2b1b0 = 0;
  }
  else {
    uVar3 = FUN_140189300(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_140f2b1b0 = lVar2;
  }
  _DAT_140f2b150 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_140f2b1cc = 0;
  DAT_140f2b1c1 = 0;
  _DAT_140f2b168 = &DAT_140f2b158;
  _DAT_140f2b170 = &DAT_140f2b160;
  _DAT_140f2b188 = &DAT_140f2b178;
  _DAT_140f2b190 = &DAT_140f2b180;
  _DAT_140f2b1a0 = &DAT_140f2b198;
  _DAT_140f2b1a8 = &DAT_140f2b19c;
  _DAT_140f2b160 = 0;
  _DAT_140f2b180 = 0;
  _DAT_140f2b198 = 0;
  _DAT_140f2b158 = 0;
  _DAT_140f2b178 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_140f2b168 = local_res8;
    _DAT_140f2b170 = local_res8;
    _DAT_140f2b188 = local_res10;
    _DAT_140f2b190 = local_res10;
    _DAT_140f2b1a0 = local_res18[0];
    _DAT_140f2b1a8 = local_res18[0];
  }
  _DAT_140f2b1c4 = DAT_140f2a400;
  _DAT_140f2b1b8 = 0;
  _DAT_140f2b1d0 = lVar1;
  FUN_140188b50(&LAB_1401c6eb0);
  return;
}

