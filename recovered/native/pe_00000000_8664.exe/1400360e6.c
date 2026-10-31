/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400360e6 */

void FUN_1400360e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)FUN_1400324a6(param_3);
  sVar1 = strlen(_Str);
  FUN_140019fc2(param_4,_Str,_Str + sVar1);
  return;
}

