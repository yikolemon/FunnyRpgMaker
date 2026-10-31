/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006d8bd */

undefined4 * FUN_1006d8bd(undefined4 *param_1,undefined4 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)*param_2;
  *param_1 = _Str;
  sVar1 = _strlen(_Str);
  param_1[1] = sVar1;
  return param_1;
}

