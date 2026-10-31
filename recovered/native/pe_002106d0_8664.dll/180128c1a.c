/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180128c1a */

void FUN_180128c1a(float *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)param_1[6];
  dVar2 = (double)(param_1[7] + param_1[5]);
  FUN_180133606("%s %d: DPI %.0f%%\n MainMin (%.0f,%.0f), MainMax (%.0f,%.0f), MainSize (%.0f,%.0f)\n WorkMin (%.0f,%.0f), WorkMax (%.0f,%.0f), WorkSize (%.0f,%.0f)"
                ,dVar1,dVar2,(double)(param_1[8] * DAT_1802dbb34),(double)*param_1,
                (double)param_1[1],(double)(param_1[2] + *param_1),(double)(param_1[3] + param_1[1])
                ,(double)param_1[2],(double)param_1[3],(double)param_1[4],(double)param_1[5],
                (double)(param_1[6] + param_1[4]),dVar2,dVar1,(double)param_1[7]);
  return;
}

