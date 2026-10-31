/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802392c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802392c0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1802723a4(1);
  _DAT_1804190b0 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  _DAT_1804190b8 = 0;
  _DAT_1804190c0 = 0;
  _DAT_1804190c8 = (undefined *)0x0;
  _DAT_1804190d0 = (undefined *)0x0;
  _DAT_1804190d8 = 0;
  _DAT_1804190e0 = 0;
  _DAT_1804190e8 = (undefined *)0x0;
  _DAT_1804190f0 = (undefined *)0x0;
  _DAT_1804190f8 = 0;
  _DAT_180419100 = (undefined *)0x0;
  _DAT_180419108 = (undefined *)0x0;
  lVar2 = FUN_180239630(0x10);
  if (lVar2 == 0) {
    _DAT_180419110 = 0;
  }
  else {
    uVar3 = FUN_18023d070(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_180419110 = lVar2;
  }
  _DAT_1804190b0 = std::basic_filebuf<wchar_t,std::char_traits<wchar_t>_>::vftable;
  DAT_18041912c = 0;
  DAT_180419122 = 0;
  _DAT_1804190c8 = &DAT_1804190b8;
  _DAT_1804190d0 = &DAT_1804190c0;
  _DAT_1804190e8 = &DAT_1804190d8;
  _DAT_1804190f0 = &DAT_1804190e0;
  _DAT_180419100 = &DAT_1804190f8;
  _DAT_180419108 = &DAT_1804190fc;
  _DAT_1804190c0 = 0;
  _DAT_1804190e0 = 0;
  _DAT_1804190f8 = 0;
  _DAT_1804190b8 = 0;
  _DAT_1804190d8 = 0;
  _DAT_180419124 = DAT_180419150;
  _DAT_180419118 = 0;
  _DAT_180419130 = uVar1;
  FUN_18023d710(&LAB_1802aae80);
  return;
}

