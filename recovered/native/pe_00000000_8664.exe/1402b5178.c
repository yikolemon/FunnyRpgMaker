/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b5178 */

longlong * FUN_1402b5178(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1404c99d8;
    param_1[2] = (longlong)&DAT_1404c99e0;
    FUN_1402b50ee(param_1 + 4);
  }
  FUN_1402b5386(param_1,param_2,0,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0x10) = &DAT_1404cb810;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[2] + 4) + 0xc) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404cb7b0;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x20;
  return param_1;
}

