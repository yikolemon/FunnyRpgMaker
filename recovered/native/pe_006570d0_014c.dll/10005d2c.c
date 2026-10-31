/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005d2c */

int * FUN_10005d2c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined ***local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined **local_138;
  undefined1 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  undefined1 local_124 [256];
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_158;
  local_18 = &LAB_100129b0;
  local_1c = ExceptionList;
  local_134 = local_124;
  local_130 = 0;
  local_12c = 0x100;
  local_138 = std::
              _Fmt_iterator_buffer<std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,char,std::_Fmt_buffer_traits>
              ::vftable;
  local_128 = param_2;
  local_14 = 0;
  local_158 = param_3;
  local_154 = param_4;
  local_150 = 0;
  local_14c = 0;
  local_148 = &local_138;
  local_144 = param_5;
  local_140 = param_6;
  local_13c = param_7;
  ExceptionList = &local_1c;
  FUN_10005e37(param_3,param_4,&local_158);
  uVar1 = local_130;
  local_130 = 0;
  local_24 = local_128;
  FUN_10005f4c(*(undefined4 *)(local_128 + 0x10),local_124,uVar1);
  local_128 = local_24;
  *param_1 = local_24;
  local_14 = 0xffffffff;
  FUN_10005ef0();
  ExceptionList = local_1c;
  return param_1;
}

