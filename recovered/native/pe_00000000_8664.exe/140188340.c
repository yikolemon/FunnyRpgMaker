/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140188340(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1401930f8(1);
  _DAT_140f2b090 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  _DAT_140f2b098 = 0;
  _DAT_140f2b0a0 = 0;
  _DAT_140f2b0a8 = (undefined *)0x0;
  _DAT_140f2b0b0 = (undefined *)0x0;
  _DAT_140f2b0b8 = 0;
  _DAT_140f2b0c0 = 0;
  _DAT_140f2b0c8 = (undefined *)0x0;
  _DAT_140f2b0d0 = (undefined *)0x0;
  _DAT_140f2b0d8 = 0;
  _DAT_140f2b0e0 = (undefined *)0x0;
  _DAT_140f2b0e8 = (undefined *)0x0;
  lVar2 = FUN_1401887b0(0x10);
  if (lVar2 == 0) {
    _DAT_140f2b0f0 = 0;
  }
  else {
    uVar3 = FUN_140189300(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_140f2b0f0 = lVar2;
  }
  _DAT_140f2b090 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  DAT_140f2b10c = 0;
  DAT_140f2b102 = 0;
  _DAT_140f2b0a8 = &DAT_140f2b098;
  _DAT_140f2b0b0 = &DAT_140f2b0a0;
  _DAT_140f2b0c8 = &DAT_140f2b0b8;
  _DAT_140f2b0d0 = &DAT_140f2b0c0;
  _DAT_140f2b0e0 = &DAT_140f2b0d8;
  _DAT_140f2b0e8 = &DAT_140f2b0dc;
  _DAT_140f2b0a0 = 0;
  _DAT_140f2b0c0 = 0;
  _DAT_140f2b0d8 = 0;
  _DAT_140f2b098 = 0;
  _DAT_140f2b0b8 = 0;
  _DAT_140f2b104 = DAT_140f2b130;
  _DAT_140f2b0f8 = 0;
  _DAT_140f2b110 = uVar1;
  FUN_140188b50(&LAB_1401c6e30);
  return;
}

