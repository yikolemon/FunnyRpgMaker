/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402125bc */

void FUN_1402125bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (7 < (ulonglong)param_1[3]) {
    FUN_140212bec(param_1,*param_1,param_1[3],param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}

