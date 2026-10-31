/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073c38 */

longlong * FUN_180073c38(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1802b8508;
    param_1[2] = (longlong)&DAT_1802b8510;
    FUN_180073bb0(param_1 + 4);
  }
  FUN_180073fac(param_1,param_2,0,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0x10) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0xc) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x20;
  return param_1;
}

