/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003b008 */

void FUN_18003b008(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  _Str = (&PTR_s_T_18036c276_6_1802b08c0)[*(int *)(param_2 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_18003ae98(local_58,sVar1,param_1 + 8,param_4);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  FUN_18003af0c(local_58);
  return;
}

