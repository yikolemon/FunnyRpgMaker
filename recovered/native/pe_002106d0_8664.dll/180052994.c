/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180052994 */

undefined8 * FUN_180052994(undefined8 *param_1,char *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar2 = strlen(param_2);
  if (0xf < sVar2 + param_3[2]) {
    FUN_180003b06(param_1,sVar2 + param_3[2]);
    param_1[2] = 0;
  }
  sVar2 = strlen(param_2);
  FUN_180003300(param_1,param_2,sVar2,param_4,param_1,uVar3);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_180003300(param_1,param_3,*puVar1,param_4,param_1,uVar3);
  return param_1;
}

