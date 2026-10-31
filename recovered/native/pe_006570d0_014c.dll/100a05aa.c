/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a05aa */

int * __thiscall FUN_100a05aa(int *param_1,undefined4 param_2,int param_3)

{
  int **ppiVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3fb0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = param_1;
  ppiVar1 = &local_24;
  if (param_3 != 0) {
    *param_1 = (int)&DAT_10294d04;
    param_1[4] = (int)&DAT_10294d0c;
    FUN_100a0512();
    ppiVar1 = (int **)local_20;
  }
  local_20 = (undefined1 *)ppiVar1;
  local_14 = 0;
  FUN_100a07de(param_2,0,0);
  *(undefined ***)((int)local_24 + *(int *)(local_24[4] + 4) + 0x10) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(local_24[4] + 4) + 0xc) = *(int *)(local_24[4] + 4) + -8;
  *(undefined ***)((int)local_24 + *(int *)(*local_24 + 4)) =
       std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((int)local_24 + *(int *)(*local_24 + 4) + -4) = *(int *)(*local_24 + 4) + -0x20;
  ExceptionList = local_1c;
  return local_24;
}

