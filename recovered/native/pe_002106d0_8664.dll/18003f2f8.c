/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f2f8 */

void FUN_18003f2f8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_January_1802b09c8)[*(int *)(param_3 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  return;
}

