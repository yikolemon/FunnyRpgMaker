/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140059a40 */

longlong * FUN_140059a40(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_1401c9238;
    FUN_140059812(param_1 + 3);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_140059b16((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_2,param_3);
  return param_1;
}

