/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b962 */

longlong * FUN_18007b962(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1802b90d0;
    param_1[2] = (longlong)&DAT_1802b90d8;
    FUN_180073bb0(param_1 + 0x13);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_180073c38(param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_18007bd04(param_1 + 3,3);
  return param_1;
}

