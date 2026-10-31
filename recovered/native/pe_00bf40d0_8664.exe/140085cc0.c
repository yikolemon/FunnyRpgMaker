/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085cc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140085cc0(void)

{
  undefined *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  puVar1 = FUN_14008e9d4(1);
  _DAT_14013cc00 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  _DAT_14013cc08 = 0;
  _DAT_14013cc10 = 0;
  _DAT_14013cc18 = (undefined *)0x0;
  _DAT_14013cc20 = (undefined *)0x0;
  _DAT_14013cc28 = 0;
  _DAT_14013cc30 = 0;
  _DAT_14013cc38 = (undefined *)0x0;
  _DAT_14013cc40 = (undefined *)0x0;
  _DAT_14013cc48 = 0;
  _DAT_14013cc50 = (undefined *)0x0;
  _DAT_14013cc58 = (undefined *)0x0;
  lVar2 = FUN_1400863a0(0x10);
  if (lVar2 == 0) {
    _DAT_14013cc60 = 0;
  }
  else {
    plVar3 = FUN_140086860('\x01');
    *(longlong **)(lVar2 + 8) = plVar3;
    _DAT_14013cc60 = lVar2;
  }
  _DAT_14013cc00 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  DAT_14013cc7c = 0;
  DAT_14013cc72 = 0;
  _DAT_14013cc18 = &DAT_14013cc08;
  _DAT_14013cc20 = &DAT_14013cc10;
  _DAT_14013cc38 = &DAT_14013cc28;
  _DAT_14013cc40 = &DAT_14013cc30;
  _DAT_14013cc50 = &DAT_14013cc48;
  _DAT_14013cc58 = &DAT_14013cc4c;
  _DAT_14013cc10 = 0;
  _DAT_14013cc30 = 0;
  _DAT_14013cc48 = 0;
  _DAT_14013cc08 = 0;
  _DAT_14013cc28 = 0;
  _DAT_14013cc74 = DAT_14013cca0;
  _DAT_14013cc68 = 0;
  _DAT_14013cc80 = puVar1;
  FUN_14008b5e0(0x1400b50c0);
  return;
}

