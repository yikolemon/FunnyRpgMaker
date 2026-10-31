/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003b308 */

void FUN_18003b308(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_58 [40];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  _Str = (&PTR_DAT_1802b0968)[*(int *)(param_3 + 0x10)];
  sVar1 = strlen(_Str);
  FUN_18003ae98(local_58,sVar1,param_1 + 8,param_4);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  FUN_18003af0c(local_58);
  return;
}

