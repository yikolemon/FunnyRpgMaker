/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140290e1a */

longlong *
FUN_140290e1a(longlong *param_1,undefined8 param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_5 != 0) {
    *param_1 = (longlong)&DAT_1404c9680;
    FUN_140285080(param_1 + 0x15);
  }
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404ca898;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  plVar1 = param_1 + 1;
  FUN_140290fce(param_1,plVar1,0,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404ca898;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_140285222(plVar1);
  lVar2 = FUN_14029033c(plVar1,param_2,param_3 | 2,param_4);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    FUN_1402856fa((longlong)param_1 + lVar2,
                  (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                  *(uint *)((longlong)param_1 + lVar2 + 0x10) | 2,0);
  }
  return param_1;
}

