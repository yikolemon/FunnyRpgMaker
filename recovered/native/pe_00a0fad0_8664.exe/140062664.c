/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062664 */

longlong * FUN_140062664(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_14013a0d8;
    param_1[2] = (longlong)&DAT_14013a0e0;
    FUN_1400625da(param_1 + 4);
  }
  FUN_140062808(param_1,param_2,0,0);
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

