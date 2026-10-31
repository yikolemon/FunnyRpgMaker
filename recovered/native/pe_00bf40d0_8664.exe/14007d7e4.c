/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d7e4 */

void FUN_14007d7e4(byte *param_1,ulonglong param_2,int *param_3,undefined *param_4,int param_5,
                  int param_6)

{
  param_3[1] = -param_3[1];
  param_3[3] = -param_3[3];
  param_3[5] = -param_3[5];
  if ((int)param_2 != 2) {
    param_3[7] = -param_3[7];
  }
  FUN_14007d6c7(param_1,param_2,param_3,param_4,-param_6,-param_5);
  param_3[1] = -param_3[1];
  return;
}

