/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a46c */

longlong * FUN_14000a46c(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_14013a0d8;
    param_1[2] = (longlong)&DAT_14013a0e0;
    FUN_14000a3e4(param_1 + 4);
  }
  FUN_14000a772(param_1,param_2,0,0);
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

