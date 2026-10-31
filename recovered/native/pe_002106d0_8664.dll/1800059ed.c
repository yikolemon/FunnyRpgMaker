/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800059ed */

longlong * FUN_1800059ed(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined **local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [256];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_150 = 0;
  local_148 = 0x100;
  local_160 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
              ::vftable;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_158 = local_138;
  local_140 = param_2;
  FUN_180005ade();
  lVar2 = local_140;
  uVar1 = local_150;
  local_150 = 0;
  FUN_180005c88(local_140,*(undefined8 *)(local_140 + 0x10),local_138,uVar1);
  *param_1 = lVar2;
  local_140 = lVar2;
  FUN_180005c0e(&local_160);
  return param_1;
}

