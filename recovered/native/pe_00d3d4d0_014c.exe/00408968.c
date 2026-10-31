/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408968 */

int * __thiscall FUN_00408968(void *this,undefined4 param_1,int param_2)

{
  int **ppiVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418060;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  ppiVar1 = &local_24;
  if (param_2 != 0) {
    *(undefined **)this = &DAT_004a8d64;
    *(undefined **)((int)this + 0x10) = &DAT_004a8d6c;
    FUN_004088d0((undefined4 *)((int)this + 0x20));
    ppiVar1 = (int **)local_20;
  }
  local_20 = (undefined1 *)ppiVar1;
  local_14 = 0;
  FUN_00408bc0(this,param_1,'\0',0);
  *(undefined ***)((int)local_24 + *(int *)(local_24[4] + 4) + 0x10) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(local_24[4] + 4) + 0xc) = *(int *)(local_24[4] + 4) + -8;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -0x20;
  ExceptionList = local_1c;
  return local_24;
}

