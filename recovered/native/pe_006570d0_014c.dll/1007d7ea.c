/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d7ea */

void __fastcall FUN_1007d7ea(int param_1)

{
  int iVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c2e60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + -0x68 + *(int *)(*(int *)(param_1 + -0x68) + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(int *)(param_1 + -0x68) + 4);
  *(int *)(param_1 + -0x6c + iVar1) = iVar1 + -0x68;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_1007b31a();
  ExceptionList = local_10;
  return;
}

