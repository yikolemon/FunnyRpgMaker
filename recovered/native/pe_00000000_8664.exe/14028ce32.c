/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028ce32 */

longlong * FUN_14028ce32(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1404ca5a0;
    param_1[2] = (longlong)&DAT_1404ca5a8;
    FUN_140285080(param_1 + 0x13);
  }
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404ca5b8;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_140285108(param_1,param_1 + 3,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404ca5b8;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_14028d1d4(param_1 + 3,3);
  return param_1;
}

