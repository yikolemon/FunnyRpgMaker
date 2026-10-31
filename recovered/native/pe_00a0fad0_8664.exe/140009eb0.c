/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009eb0 */

longlong * FUN_140009eb0(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_140139d7c;
    param_1[2] = (longlong)&DAT_140139d84;
    FUN_14000a3e4(param_1 + 0x13);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_14000a46c(param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_14000a586(param_1 + 3,3);
  return param_1;
}

