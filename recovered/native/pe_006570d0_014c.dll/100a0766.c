/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0766 */

void __fastcall FUN_100a0766(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c3fd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
             vftable;
  local_18 = param_1;
  FUN_100a13b8();
  local_8 = 0xffffffff;
  FUN_100a0a9a();
  ExceptionList = local_10;
  return;
}

