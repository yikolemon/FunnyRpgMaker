/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d32b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d32b0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_14010b2d0(1);
  _DAT_1401d4900 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  _DAT_1401d4908 = 0;
  _DAT_1401d4910 = 0;
  _DAT_1401d4918 = (undefined *)0x0;
  _DAT_1401d4920 = (undefined *)0x0;
  _DAT_1401d4928 = 0;
  _DAT_1401d4930 = 0;
  _DAT_1401d4938 = (undefined *)0x0;
  _DAT_1401d4940 = (undefined *)0x0;
  _DAT_1401d4948 = 0;
  _DAT_1401d4950 = (undefined *)0x0;
  _DAT_1401d4958 = (undefined *)0x0;
  lVar2 = FUN_1400d3680(0x10);
  if (lVar2 == 0) {
    _DAT_1401d4960 = 0;
  }
  else {
    uVar3 = FUN_1400d4020(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_1401d4960 = lVar2;
  }
  _DAT_1401d4900 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  DAT_1401d497c = 0;
  DAT_1401d4972 = 0;
  _DAT_1401d4918 = &DAT_1401d4908;
  _DAT_1401d4920 = &DAT_1401d4910;
  _DAT_1401d4938 = &DAT_1401d4928;
  _DAT_1401d4940 = &DAT_1401d4930;
  _DAT_1401d4950 = &DAT_1401d4948;
  _DAT_1401d4958 = &DAT_1401d494c;
  _DAT_1401d4910 = 0;
  _DAT_1401d4930 = 0;
  _DAT_1401d4948 = 0;
  _DAT_1401d4908 = 0;
  _DAT_1401d4928 = 0;
  _DAT_1401d4974 = DAT_1401d4998;
  _DAT_1401d4968 = 0;
  _DAT_1401d4980 = uVar1;
  FUN_1400d3740(&LAB_140138540);
  return;
}

