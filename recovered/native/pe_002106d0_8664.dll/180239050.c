/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180239050(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_1802723a4(1);
  _DAT_180418f50 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_180418f58 = 0;
  _DAT_180418f60 = 0;
  _DAT_180418f68 = (undefined *)0x0;
  _DAT_180418f70 = (undefined *)0x0;
  _DAT_180418f78 = 0;
  _DAT_180418f80 = 0;
  _DAT_180418f88 = (undefined *)0x0;
  _DAT_180418f90 = (undefined *)0x0;
  _DAT_180418f98 = 0;
  _DAT_180418fa0 = (undefined *)0x0;
  _DAT_180418fa8 = (undefined *)0x0;
  lVar2 = FUN_180239630(0x10);
  if (lVar2 == 0) {
    _DAT_180418fb0 = 0;
  }
  else {
    uVar3 = FUN_18023d070(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_180418fb0 = lVar2;
  }
  _DAT_180418f50 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_180418fcc = 0;
  DAT_180418fc1 = 0;
  _DAT_180418f68 = &DAT_180418f58;
  _DAT_180418f70 = &DAT_180418f60;
  _DAT_180418f88 = &DAT_180418f78;
  _DAT_180418f90 = &DAT_180418f80;
  _DAT_180418fa0 = &DAT_180418f98;
  _DAT_180418fa8 = &DAT_180418f9c;
  _DAT_180418f60 = 0;
  _DAT_180418f80 = 0;
  _DAT_180418f98 = 0;
  _DAT_180418f58 = 0;
  _DAT_180418f78 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_180418f68 = local_res8;
    _DAT_180418f70 = local_res8;
    _DAT_180418f88 = local_res10;
    _DAT_180418f90 = local_res10;
    _DAT_180418fa0 = local_res18[0];
    _DAT_180418fa8 = local_res18[0];
  }
  _DAT_180418fc4 = DAT_180417ca4;
  _DAT_180418fb8 = 0;
  _DAT_180418fd0 = lVar1;
  FUN_18023d710(&LAB_1802aae00);
  return;
}

