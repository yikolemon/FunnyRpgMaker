/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085ec0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140085ec0(void)

{
  undefined *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  puVar1 = FUN_14008e9d4(1);
  _DAT_14013cd30 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_14013cd38 = 0;
  _DAT_14013cd40 = 0;
  _DAT_14013cd48 = (undefined *)0x0;
  _DAT_14013cd50 = (undefined *)0x0;
  _DAT_14013cd58 = 0;
  _DAT_14013cd60 = 0;
  _DAT_14013cd68 = (undefined *)0x0;
  _DAT_14013cd70 = (undefined *)0x0;
  _DAT_14013cd78 = 0;
  _DAT_14013cd80 = (undefined *)0x0;
  _DAT_14013cd88 = (undefined *)0x0;
  lVar2 = FUN_1400863a0(0x10);
  if (lVar2 == 0) {
    _DAT_14013cd90 = 0;
  }
  else {
    plVar3 = FUN_140086860('\x01');
    *(longlong **)(lVar2 + 8) = plVar3;
    _DAT_14013cd90 = lVar2;
  }
  _DAT_14013cd30 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_14013cdac = 0;
  DAT_14013cda1 = 0;
  _DAT_14013cd48 = &DAT_14013cd38;
  _DAT_14013cd50 = &DAT_14013cd40;
  _DAT_14013cd68 = &DAT_14013cd58;
  _DAT_14013cd70 = &DAT_14013cd60;
  _DAT_14013cd80 = &DAT_14013cd78;
  _DAT_14013cd88 = &DAT_14013cd7c;
  _DAT_14013cd40 = 0;
  _DAT_14013cd60 = 0;
  _DAT_14013cd78 = 0;
  _DAT_14013cd38 = 0;
  _DAT_14013cd58 = 0;
  if (puVar1 != (undefined *)0x0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers
              ((longlong)puVar1,(longlong *)&local_res8,(longlong *)&local_res10,
               (longlong *)local_res18);
    _DAT_14013cd48 = local_res8;
    _DAT_14013cd50 = local_res8;
    _DAT_14013cd68 = local_res10;
    _DAT_14013cd70 = local_res10;
    _DAT_14013cd80 = local_res18[0];
    _DAT_14013cd88 = local_res18[0];
  }
  _DAT_14013cda4 = DAT_14013cdd0;
  _DAT_14013cd98 = 0;
  _DAT_14013cdb0 = puVar1;
  FUN_14008b5e0(0x1400b5140);
  return;
}

