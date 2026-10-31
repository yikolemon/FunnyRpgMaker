/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d3010(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_14010b2d0(1);
  _DAT_1401cc5c0 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_1401cc5c8 = 0;
  _DAT_1401cc5d0 = 0;
  _DAT_1401cc5d8 = (undefined *)0x0;
  _DAT_1401cc5e0 = (undefined *)0x0;
  _DAT_1401cc5e8 = 0;
  _DAT_1401cc5f0 = 0;
  _DAT_1401cc5f8 = (undefined *)0x0;
  _DAT_1401cc600 = (undefined *)0x0;
  _DAT_1401cc608 = 0;
  _DAT_1401cc610 = (undefined *)0x0;
  _DAT_1401cc618 = (undefined *)0x0;
  lVar2 = FUN_1400d3680(0x10);
  if (lVar2 == 0) {
    _DAT_1401cc620 = 0;
  }
  else {
    uVar3 = FUN_1400d4020(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_1401cc620 = lVar2;
  }
  _DAT_1401cc5c0 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_1401cc63c = 0;
  DAT_1401cc631 = 0;
  _DAT_1401cc5d8 = &DAT_1401cc5c8;
  _DAT_1401cc5e0 = &DAT_1401cc5d0;
  _DAT_1401cc5f8 = &DAT_1401cc5e8;
  _DAT_1401cc600 = &DAT_1401cc5f0;
  _DAT_1401cc610 = &DAT_1401cc608;
  _DAT_1401cc618 = &DAT_1401cc60c;
  _DAT_1401cc5d0 = 0;
  _DAT_1401cc5f0 = 0;
  _DAT_1401cc608 = 0;
  _DAT_1401cc5c8 = 0;
  _DAT_1401cc5e8 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_1401cc5d8 = local_res8;
    _DAT_1401cc5e0 = local_res8;
    _DAT_1401cc5f8 = local_res10;
    _DAT_1401cc600 = local_res10;
    _DAT_1401cc610 = local_res18[0];
    _DAT_1401cc618 = local_res18[0];
  }
  _DAT_1401cc634 = DAT_1401cc1d0;
  _DAT_1401cc628 = 0;
  _DAT_1401cc640 = lVar1;
  FUN_1400d3740(&LAB_140138450);
  return;
}

