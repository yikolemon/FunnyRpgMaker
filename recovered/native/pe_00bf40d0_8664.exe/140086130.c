/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086130 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140086130(void)

{
  undefined *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  puVar1 = FUN_14008e9d4(2);
  _DAT_14013cdf0 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_14013cdf8 = 0;
  _DAT_14013ce00 = 0;
  _DAT_14013ce08 = (undefined *)0x0;
  _DAT_14013ce10 = (undefined *)0x0;
  _DAT_14013ce18 = 0;
  _DAT_14013ce20 = 0;
  _DAT_14013ce28 = (undefined *)0x0;
  _DAT_14013ce30 = (undefined *)0x0;
  _DAT_14013ce38 = 0;
  _DAT_14013ce40 = (undefined *)0x0;
  _DAT_14013ce48 = (undefined *)0x0;
  lVar2 = FUN_1400863a0(0x10);
  if (lVar2 == 0) {
    _DAT_14013ce50 = 0;
  }
  else {
    plVar3 = FUN_140086860('\x01');
    *(longlong **)(lVar2 + 8) = plVar3;
    _DAT_14013ce50 = lVar2;
  }
  _DAT_14013cdf0 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_14013ce6c = 0;
  DAT_14013ce61 = 0;
  _DAT_14013ce08 = &DAT_14013cdf8;
  _DAT_14013ce10 = &DAT_14013ce00;
  _DAT_14013ce28 = &DAT_14013ce18;
  _DAT_14013ce30 = &DAT_14013ce20;
  _DAT_14013ce40 = &DAT_14013ce38;
  _DAT_14013ce48 = &DAT_14013ce3c;
  _DAT_14013ce00 = 0;
  _DAT_14013ce20 = 0;
  _DAT_14013ce38 = 0;
  _DAT_14013cdf8 = 0;
  _DAT_14013ce18 = 0;
  if (puVar1 != (undefined *)0x0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers
              ((longlong)puVar1,(longlong *)&local_res8,(longlong *)&local_res10,
               (longlong *)local_res18);
    _DAT_14013ce08 = local_res8;
    _DAT_14013ce10 = local_res8;
    _DAT_14013ce28 = local_res10;
    _DAT_14013ce30 = local_res10;
    _DAT_14013ce40 = local_res18[0];
    _DAT_14013ce48 = local_res18[0];
  }
  _DAT_14013ce64 = DAT_14013cdd0;
  _DAT_14013ce58 = 0;
  _DAT_14013ce70 = puVar1;
  FUN_14008b5e0(0x1400b51c0);
  return;
}

