/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3658 */

longlong * FUN_1800a3658(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1802b90d0;
    param_1[2] = (longlong)&DAT_1802b90d8;
    FUN_1800a3c1e(param_1 + 0x13);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_1800a3ca8(param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_1800a3dc2(param_1 + 3,3);
  return param_1;
}

