/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012315b */

void FUN_1012315b(float *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1012d551("%s %d: DPI %.0f%%\n MainMin (%.0f,%.0f), MainMax (%.0f,%.0f), MainSize (%.0f,%.0f)\n WorkMin (%.0f,%.0f), WorkMax (%.0f,%.0f), WorkSize (%.0f,%.0f)"
               ,param_2,param_3,(double)(param_1[8] * DAT_102b8c10),(double)*param_1,
               (double)param_1[1],(double)(param_1[2] + *param_1),(double)(param_1[3] + param_1[1]),
               (double)param_1[2],(double)param_1[3],(double)param_1[4],(double)param_1[5],
               (double)(param_1[6] + param_1[4]),(double)(param_1[7] + param_1[5]),
               (double)param_1[6],(double)param_1[7]);
  return;
}

