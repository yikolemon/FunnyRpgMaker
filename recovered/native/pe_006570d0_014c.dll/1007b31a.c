/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007b31a */

void __fastcall FUN_1007b31a(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2db0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_18 = param_1;
  FUN_1007b968();
  local_8 = 0xffffffff;
  FUN_10074346();
  ExceptionList = local_10;
  return;
}

