/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180055c00 */

undefined8 *
FUN_180055c00(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *_Str;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  _Str = (char *)*param_2;
  sVar2 = strlen(_Str);
  sVar3 = strlen(param_3);
  if (0xf < param_4[2] + sVar3 + sVar2 + 1) {
    FUN_180003b06(param_1);
    param_1[2] = 0;
    _Str = (char *)*param_2;
  }
  sVar2 = strlen(_Str);
  FUN_180003300(param_1,_Str,sVar2);
  sVar2 = strlen(param_3);
  FUN_180003300(param_1,param_3,sVar2);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  FUN_180003300(param_1,param_4,*puVar1);
  FUN_180003bf2(param_1,*param_5);
  return param_1;
}

