/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400112b1 */

undefined8 *
FUN_1400112b1(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4,
             char *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  lVar6 = param_2[2];
  sVar3 = strlen(param_3);
  lVar2 = param_4[2];
  sVar4 = strlen(param_5);
  uVar5 = sVar4 + sVar3 + lVar6 + lVar2 + param_6[2] + param_7[2];
  if (0xf < uVar5) {
    FUN_14000401c(param_1,uVar5);
    param_1[2] = 0;
    lVar6 = param_2[2];
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140003816(param_1,param_2,lVar6);
  sVar3 = strlen(param_3);
  FUN_140003816(param_1,param_3,sVar3);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_140003816(param_1,param_4,*puVar1);
  sVar3 = strlen(param_5);
  FUN_140003816(param_1,param_5,sVar3);
  puVar1 = param_6 + 2;
  if (0xf < (ulonglong)param_6[3]) {
    param_6 = (undefined8 *)*param_6;
  }
  FUN_140003816(param_1,param_6,*puVar1);
  puVar1 = param_7 + 2;
  if (0xf < (ulonglong)param_7[3]) {
    param_7 = (undefined8 *)*param_7;
  }
  FUN_140003816(param_1,param_7,*puVar1);
  return param_1;
}

