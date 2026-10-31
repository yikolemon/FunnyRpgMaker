/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062808 */

longlong * FUN_140062808(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_14013a118;
    FUN_1400625da(param_1 + 3);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_1400628ce((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_2,param_3);
  return param_1;
}

