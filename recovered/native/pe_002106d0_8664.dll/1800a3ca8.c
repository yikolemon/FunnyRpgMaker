/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3ca8 */

longlong * FUN_1800a3ca8(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1802b8508;
    param_1[2] = (longlong)&DAT_1802b8510;
    FUN_1800a3c1e(param_1 + 4);
  }
  FUN_1800a3eb6(param_1,param_2,0,0);
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

