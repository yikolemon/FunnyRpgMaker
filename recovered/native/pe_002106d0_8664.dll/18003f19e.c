/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f19e */

void FUN_18003f19e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  
  _Str = (&PTR_s_T_18036c276_6_1802b08c0)[*(int *)(param_2 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  return;
}

