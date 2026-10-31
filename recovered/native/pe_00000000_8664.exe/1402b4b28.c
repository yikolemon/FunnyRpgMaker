/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b4b28 */

longlong * FUN_1402b4b28(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1404ca5a0;
    param_1[2] = (longlong)&DAT_1404ca5a8;
    FUN_1402b50ee(param_1 + 0x13);
  }
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404cb570;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_1402b5178(param_1,param_1 + 3,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404cb570;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_1402b5292(param_1 + 3,3);
  return param_1;
}

