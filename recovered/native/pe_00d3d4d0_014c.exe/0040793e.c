/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040793e */

void __fastcall FUN_0040793e(int param_1)

{
  int iVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00417fe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + -0x68 + *(int *)(*(int *)(param_1 + -0x68) + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x68) + 4);
  *(int *)(param_1 + -0x6c + iVar1) = iVar1 + -0x68;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_004079ec((undefined4 *)(param_1 + -0x50));
  ExceptionList = local_10;
  return;
}

