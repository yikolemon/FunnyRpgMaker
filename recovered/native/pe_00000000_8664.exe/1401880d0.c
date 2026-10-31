/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401880d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401880d0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_1401930f8(1);
  _DAT_140f2af70 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_140f2af78 = 0;
  _DAT_140f2af80 = 0;
  _DAT_140f2af88 = (undefined *)0x0;
  _DAT_140f2af90 = (undefined *)0x0;
  _DAT_140f2af98 = 0;
  _DAT_140f2afa0 = 0;
  _DAT_140f2afa8 = (undefined *)0x0;
  _DAT_140f2afb0 = (undefined *)0x0;
  _DAT_140f2afb8 = 0;
  _DAT_140f2afc0 = (undefined *)0x0;
  _DAT_140f2afc8 = (undefined *)0x0;
  lVar2 = FUN_1401887b0(0x10);
  if (lVar2 == 0) {
    _DAT_140f2afd0 = 0;
  }
  else {
    uVar3 = FUN_140189300(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_140f2afd0 = lVar2;
  }
  _DAT_140f2af70 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_140f2afec = 0;
  DAT_140f2afe1 = 0;
  _DAT_140f2af88 = &DAT_140f2af78;
  _DAT_140f2af90 = &DAT_140f2af80;
  _DAT_140f2afa8 = &DAT_140f2af98;
  _DAT_140f2afb0 = &DAT_140f2afa0;
  _DAT_140f2afc0 = &DAT_140f2afb8;
  _DAT_140f2afc8 = &DAT_140f2afbc;
  _DAT_140f2af80 = 0;
  _DAT_140f2afa0 = 0;
  _DAT_140f2afb8 = 0;
  _DAT_140f2af78 = 0;
  _DAT_140f2af98 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_140f2af88 = local_res8;
    _DAT_140f2af90 = local_res8;
    _DAT_140f2afa8 = local_res10;
    _DAT_140f2afb0 = local_res10;
    _DAT_140f2afc0 = local_res18[0];
    _DAT_140f2afc8 = local_res18[0];
  }
  _DAT_140f2afe4 = DAT_140f2a400;
  _DAT_140f2afd8 = 0;
  _DAT_140f2aff0 = lVar1;
  FUN_140188b50(&LAB_1401c6db0);
  return;
}

