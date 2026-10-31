/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c89a */

void FUN_18003c89a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18003ae98(local_48,2,param_1 + 8);
  _Str = (char *)FUN_18003c922(param_3);
  sVar1 = strlen(_Str);
  FUN_180018bde(param_4,_Str,_Str + sVar1);
  FUN_18003af0c(local_48);
  return;
}

