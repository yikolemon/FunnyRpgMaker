/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019d6e */

longlong * FUN_140019d6e(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    *param_1 = (longlong)&DAT_14013a59c;
    FUN_14000a3e4(param_1 + 2);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x10;
  FUN_14000a848((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_2,param_3);
  return param_1;
}

