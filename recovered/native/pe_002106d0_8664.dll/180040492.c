/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180040492 */

void FUN_180040492(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (char *)FUN_18003c922(param_3);
  sVar1 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  return;
}

