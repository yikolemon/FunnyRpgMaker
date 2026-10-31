/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d34b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d34b0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_14010b2d0(2);
  _DAT_1401d4a20 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  _DAT_1401d4a28 = 0;
  _DAT_1401d4a30 = 0;
  _DAT_1401d4a38 = (undefined *)0x0;
  _DAT_1401d4a40 = (undefined *)0x0;
  _DAT_1401d4a48 = 0;
  _DAT_1401d4a50 = 0;
  _DAT_1401d4a58 = (undefined *)0x0;
  _DAT_1401d4a60 = (undefined *)0x0;
  _DAT_1401d4a68 = 0;
  _DAT_1401d4a70 = (undefined *)0x0;
  _DAT_1401d4a78 = (undefined *)0x0;
  lVar2 = FUN_1400d3680(0x10);
  if (lVar2 == 0) {
    _DAT_1401d4a80 = 0;
  }
  else {
    uVar3 = FUN_1400d4020(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_1401d4a80 = lVar2;
  }
  _DAT_1401d4a20 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  DAT_1401d4a9c = 0;
  DAT_1401d4a92 = 0;
  _DAT_1401d4a38 = &DAT_1401d4a28;
  _DAT_1401d4a40 = &DAT_1401d4a30;
  _DAT_1401d4a58 = &DAT_1401d4a48;
  _DAT_1401d4a60 = &DAT_1401d4a50;
  _DAT_1401d4a70 = &DAT_1401d4a68;
  _DAT_1401d4a78 = &DAT_1401d4a6c;
  _DAT_1401d4a30 = 0;
  _DAT_1401d4a50 = 0;
  _DAT_1401d4a68 = 0;
  _DAT_1401d4a28 = 0;
  _DAT_1401d4a48 = 0;
  _DAT_1401d4a94 = DAT_1401d4998;
  _DAT_1401d4a88 = 0;
  _DAT_1401d4aa0 = uVar1;
  FUN_1400d3740(&LAB_1401385c0);
  return;
}

