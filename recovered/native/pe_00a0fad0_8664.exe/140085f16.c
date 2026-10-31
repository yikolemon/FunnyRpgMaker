/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140085f16 */

longlong *
FUN_140085f16(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    *param_1 = (longlong)&DAT_1401412c8;
    FUN_14000a3e4(param_1 + 0x15);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  plVar1 = param_1 + 1;
  FUN_140019d6e(param_1,plVar1,0,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_14003e8be(plVar1);
  lVar2 = FUN_14007a532(plVar1,param_2,param_3 | 2,param_4);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    FUN_14000a9f0((longlong)param_1 + lVar2,
                  (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                  *(uint *)((longlong)param_1 + lVar2 + 0x10) | 2,0);
  }
  return param_1;
}

