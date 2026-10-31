/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180238df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180238df0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_1802723a4(2);
  _DAT_180418ea0 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_180418ea8 = 0;
  _DAT_180418eb0 = 0;
  _DAT_180418eb8 = (undefined *)0x0;
  _DAT_180418ec0 = (undefined *)0x0;
  _DAT_180418ec8 = 0;
  _DAT_180418ed0 = 0;
  _DAT_180418ed8 = (undefined *)0x0;
  _DAT_180418ee0 = (undefined *)0x0;
  _DAT_180418ee8 = 0;
  _DAT_180418ef0 = (undefined *)0x0;
  _DAT_180418ef8 = (undefined *)0x0;
  lVar2 = FUN_180239630(0x10);
  if (lVar2 == 0) {
    _DAT_180418f00 = 0;
  }
  else {
    uVar3 = FUN_18023d070(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_180418f00 = lVar2;
  }
  _DAT_180418ea0 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_180418f1c = 0;
  DAT_180418f11 = 0;
  _DAT_180418eb8 = &DAT_180418ea8;
  _DAT_180418ec0 = &DAT_180418eb0;
  _DAT_180418ed8 = &DAT_180418ec8;
  _DAT_180418ee0 = &DAT_180418ed0;
  _DAT_180418ef0 = &DAT_180418ee8;
  _DAT_180418ef8 = &DAT_180418eec;
  _DAT_180418eb0 = 0;
  _DAT_180418ed0 = 0;
  _DAT_180418ee8 = 0;
  _DAT_180418ea8 = 0;
  _DAT_180418ec8 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_180418eb8 = local_res8;
    _DAT_180418ec0 = local_res8;
    _DAT_180418ed8 = local_res10;
    _DAT_180418ee0 = local_res10;
    _DAT_180418ef0 = local_res18[0];
    _DAT_180418ef8 = local_res18[0];
  }
  _DAT_180418f14 = DAT_180417ca4;
  _DAT_180418f08 = 0;
  _DAT_180418f20 = lVar1;
  FUN_18023d710(&LAB_1802aad80);
  return;
}

