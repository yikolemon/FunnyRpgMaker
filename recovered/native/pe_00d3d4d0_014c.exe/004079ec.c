/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004079ec */

void __fastcall FUN_004079ec(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00417ff0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
             vftable;
  local_18 = param_1;
  FUN_00407a64((int)param_1);
  local_8 = 0xffffffff;
  FUN_00407ae2(local_18);
  ExceptionList = local_10;
  return;
}

