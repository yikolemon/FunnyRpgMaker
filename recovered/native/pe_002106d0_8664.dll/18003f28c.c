/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f28c */

void FUN_18003f28c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_Sunday_1802b0930)[*(int *)(param_3 + 0x18)];
  sVar1 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  return;
}

