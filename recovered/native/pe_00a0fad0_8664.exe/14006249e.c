/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006249e */

longlong * FUN_14006249e(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_140139d7c;
    param_1[2] = (longlong)&DAT_140139d84;
    FUN_1400625da(param_1 + 0x13);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_140062664(param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_14006277e(param_1 + 3,3);
  return param_1;
}

