/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008c604 */

longlong *
FUN_14008c604(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5
             )

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    *param_1 = (longlong)&DAT_1401637bc;
    param_1[2] = (longlong)&DAT_1401412c8;
    FUN_14000a3e4(param_1 + 0x17);
  }
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  plVar1 = param_1 + 3;
  FUN_14000a46c(param_1,plVar1,0);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_14003e8be(plVar1);
  lVar2 = FUN_14007a532(plVar1,param_2,param_3,param_4);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    FUN_14000a9f0((longlong)param_1 + lVar2,
                  (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                  *(uint *)((longlong)param_1 + lVar2 + 0x10) | 2,0);
  }
  return param_1;
}

