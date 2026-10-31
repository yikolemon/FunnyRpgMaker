/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005989c */

longlong * FUN_14005989c(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1401d3238;
    param_1[2] = (longlong)&DAT_1401d3240;
    FUN_140059812(param_1 + 4);
  }
  FUN_140059a40(param_1,param_2,0,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0x10) =
       std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0xc) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x20;
  return param_1;
}

