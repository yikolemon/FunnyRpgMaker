/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2db0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d2db0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_14010b2d0(2);
  _DAT_1401cc510 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_1401cc518 = 0;
  _DAT_1401cc520 = 0;
  _DAT_1401cc528 = (undefined *)0x0;
  _DAT_1401cc530 = (undefined *)0x0;
  _DAT_1401cc538 = 0;
  _DAT_1401cc540 = 0;
  _DAT_1401cc548 = (undefined *)0x0;
  _DAT_1401cc550 = (undefined *)0x0;
  _DAT_1401cc558 = 0;
  _DAT_1401cc560 = (undefined *)0x0;
  _DAT_1401cc568 = (undefined *)0x0;
  lVar2 = FUN_1400d3680(0x10);
  if (lVar2 == 0) {
    _DAT_1401cc570 = 0;
  }
  else {
    uVar3 = FUN_1400d4020(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_1401cc570 = lVar2;
  }
  _DAT_1401cc510 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_1401cc58c = 0;
  DAT_1401cc581 = 0;
  _DAT_1401cc528 = &DAT_1401cc518;
  _DAT_1401cc530 = &DAT_1401cc520;
  _DAT_1401cc548 = &DAT_1401cc538;
  _DAT_1401cc550 = &DAT_1401cc540;
  _DAT_1401cc560 = &DAT_1401cc558;
  _DAT_1401cc568 = &DAT_1401cc55c;
  _DAT_1401cc520 = 0;
  _DAT_1401cc540 = 0;
  _DAT_1401cc558 = 0;
  _DAT_1401cc518 = 0;
  _DAT_1401cc538 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_1401cc528 = local_res8;
    _DAT_1401cc530 = local_res8;
    _DAT_1401cc548 = local_res10;
    _DAT_1401cc550 = local_res10;
    _DAT_1401cc560 = local_res18[0];
    _DAT_1401cc568 = local_res18[0];
  }
  _DAT_1401cc584 = DAT_1401cc1d0;
  _DAT_1401cc578 = 0;
  _DAT_1401cc590 = lVar1;
  FUN_1400d3740(&LAB_1401383d0);
  return;
}

