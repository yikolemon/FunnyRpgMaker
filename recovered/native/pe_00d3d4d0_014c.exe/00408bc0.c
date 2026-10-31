/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408bc0 */

int * __thiscall FUN_00408bc0(void *this,undefined4 param_1,char param_2,int param_3)

{
  int **ppiVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00418090;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = this;
  ppiVar1 = &local_24;
  if (param_3 != 0) {
    *(undefined **)this = &DAT_004a8d94;
    FUN_004088d0((undefined4 *)((int)this + 0x18));
    ppiVar1 = (int **)local_20;
  }
  local_20 = (undefined1 *)ppiVar1;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -0x18;
  local_24[3] = 0;
  local_24[2] = 0;
  local_14 = 0;
  FUN_00408c9e((void *)(*(int *)(*local_24 + 4) + (int)local_24),param_1,param_2);
  ExceptionList = local_1c;
  return local_24;
}

