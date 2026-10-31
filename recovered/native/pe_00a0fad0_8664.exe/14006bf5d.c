/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006bf5d */

undefined8 * FUN_14006bf5d(undefined8 *param_1,char *param_2,undefined8 *param_3)

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
    FUN_14000e9ea(param_1,sVar2 + sVar1);
    param_1[2] = 0;
  }
  sVar1 = strlen(param_2);
  FUN_14000b1f8(param_1,param_2,sVar1);
  _Str = (char *)*param_3;
  sVar1 = strlen(_Str);
  FUN_14000b1f8(param_1,_Str,sVar1);
  return param_1;
}

