/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017859 */

undefined8 *
FUN_180017859(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined8 *param_5,char *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  size_t sVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar4 = strlen(param_2);
  lVar2 = param_3[2];
  lVar3 = param_5[2];
  sVar5 = strlen(param_6);
  if (0xf < sVar5 + sVar4 + lVar2 + lVar3 + 1) {
    FUN_180003b06(param_1);
    param_1[2] = 0;
  }
  sVar4 = strlen(param_2);
  FUN_180003300(param_1,param_2,sVar4);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_180003300(param_1,param_3,*puVar1);
  FUN_180003bf2(param_1,*param_4);
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_180003300(param_1,param_5,*puVar1);
  sVar4 = strlen(param_6);
  FUN_180003300(param_1,param_6,sVar4);
  return param_1;
}

