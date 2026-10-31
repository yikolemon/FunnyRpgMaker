/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006ec17 */

undefined8 *
FUN_14006ec17(undefined8 *param_1,char *param_2,undefined8 *param_3,char *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  size_t sVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar3 = strlen(param_2);
  lVar2 = param_3[2];
  sVar4 = strlen(param_4);
  uVar5 = sVar4 + sVar3 + lVar2 + param_5[2];
  if (0xf < uVar5) {
    FUN_14000e9ea(param_1,uVar5);
    param_1[2] = 0;
  }
  sVar3 = strlen(param_2);
  FUN_14000b1f8(param_1,param_2,sVar3);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_14000b1f8(param_1,param_3,*puVar1);
  sVar3 = strlen(param_4);
  FUN_14000b1f8(param_1,param_4,sVar3);
  puVar1 = param_5 + 2;
  if (0xf < (ulonglong)param_5[3]) {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_14000b1f8(param_1,param_5,*puVar1);
  return param_1;
}

