/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089218 */

longlong * FUN_140089218(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1401637bc;
    param_1[2] = (longlong)&DAT_1401412c8;
    FUN_14000a3e4(param_1 + 0x17);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_14000a46c(param_1,param_1 + 3,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_14003e8be(param_1 + 3);
  return param_1;
}

