/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008844c */

undefined8 * FUN_14008844c(undefined8 *param_1,undefined8 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)*param_2;
  *param_1 = _Str;
  sVar1 = strlen(_Str);
  param_1[1] = sVar1;
  return param_1;
}

