/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140285108 */

longlong * FUN_140285108(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1404c99d8;
    param_1[2] = (longlong)&DAT_1404c99e0;
    FUN_140285080(param_1 + 4);
  }
  FUN_14028547c(param_1,param_2,0,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0x10) = &DAT_1404c9bc0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0xc) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404c99f0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x20;
  return param_1;
}

