/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800172c9 */

undefined8 * FUN_1800172c9(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char *_Str;
  size_t sVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  sVar1 = strlen(param_2);
  sVar2 = strlen((char *)*param_3);
  if (0xf < sVar2 + sVar1) {
    FUN_180003b06(param_1,sVar2 + sVar1);
    param_1[2] = 0;
  }
  sVar1 = strlen(param_2);
  FUN_180003300(param_1,param_2,sVar1);
  _Str = (char *)*param_3;
  sVar1 = strlen(_Str);
  FUN_180003300(param_1,_Str,sVar1);
  return param_1;
}

